/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:08:10 by rocio             #+#    #+#             */
/*   Updated: 2023/03/21 14:10:32 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_open_image(char *string)
{
	int	file_descriptor;

	file_descriptor = open(string, O_RDONLY);
	if (file_descriptor < 0)
		return (0);
	close(file_descriptor);
	return (1);
}

//carga archivo en formato xpm en la estructura xpm_t.
//carga la imagen en estructura mlx_image_t usando mlx_t
//(conexión con la pantalla) y la textura que esta en el archivo
//xpm. y se limpia xpm.
//Tengo la imagen cargada con la textura.
mlx_image_t	*ft_add_element(mlx_t *mlx, char *image_path)
{
	xpm_t			*xpm;
	mlx_image_t		*image;
	mlx_texture_t	texture;

	if (ft_open_image(image_path) == 0)
		ft_print_error("Hay un error con la imagen que se quiere poner\n");
	xpm = mlx_load_xpm42(image_path);
	if (!xpm)
		ft_printf("\nxpm is null\n");
	texture = xpm->texture;
	image = mlx_texture_to_image(mlx, &texture);
	if (!image)
		ft_printf("\nimg is null\n");
	mlx_delete_xpm42(xpm);
	return (image);
}

//Dibuja en cada posición los elementos.
void	ft_image_to_window(t_game *game, int x, int y)
{
	if (y != 0 || x != 0)
		mlx_image_to_window(game->mlx, game->items.floor, x * 64, y * 64);
	if (game->map_2d[y][x] == '1')
		mlx_image_to_window(game->mlx, game->items.wall, x * 64, y * 64);
	else if (game->map_2d[y][x] == 'E')
		mlx_image_to_window(game->mlx, game->items.exit, x * 64, y * 64);
	else if (game->map_2d[y][x] == 'P')
		mlx_image_to_window(game->mlx, game->items.player, x * 64, y * 64);
	else if (game->map_2d[y][x] == 'C')
		mlx_image_to_window(game->mlx, game->items.collectible, x * 64 + 16,
			y * 64 + 16);
	if (y == 0 && x == 0)
		mlx_image_to_window(game->mlx, game->items.floor, x * 64, y * 64);
}

//Elimina elementos antiguos y refresca con la posición actual de los elementos.
//por eso vuelve a llamar a la ruta de la imagen, para cargar de nuevo
//las imágenes desde su ruta, ponerle textura y ubicarlas en en el mapa con
//función de arriba, cuando la salida es 1, es juego ganado.
void	ft_insert_image_map(t_game *game)
{
	int			x;
	int			y;

	y = 0;
	if (game->state == STATE_START)
	{
		ft_clean_old_elements(game);
		game->old_elements = game->items;
		ft_save_elements(game);
		while (y < game->rows)
		{
			x = 0;
			while (x < game->columns)
			{
				ft_image_to_window(game, x, y);
				x++;
			}
			y++;
		}
		if (game->exit_flag == 1)
			ft_winner(game);
	}
	return ;
}

//se limpian todos los elementos y se da el mensaje de ganador
//el juego se pone en estado de victoria.
void	ft_winner(t_game *game)
{
	ft_clean_old_elements(game);
	game->old_elements = game->items;
	ft_clean_old_elements(game);
	game->state = STATE_VICTORY;
	ft_print_alert(game);
	mlx_close_window(game->mlx);
}
