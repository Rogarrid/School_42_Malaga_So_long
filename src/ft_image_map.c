/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:08:10 by rocio             #+#    #+#             */
/*   Updated: 2023/02/17 12:17:07 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	open_image(char *string)
{
	int	file_descriptor;

	file_descriptor = open(string, O_RDONLY);
	if (file_descriptor < 0)
		return (0);
	close(file_descriptor);
	return (1);
}

mlx_image_t	*ft_items_to_image(mlx_t *mlx, char *img_path)
{
	xpm_t			*xpm;
	mlx_image_t		*image;
	mlx_texture_t	texture;

	if (open_image(img_path) == FALSE)
		ft_error_message(E_IMAGE, 1);
	xpm = mlx_load_xpm42(img_path);
	if (!xpm)
		printf("\nxpm is null\n");
	texture = xpm->texture;
	image = mlx_texture_to_image(mlx, &texture);
	if (!image)
		printf("\nimg is null\n");
	mlx_delete_xpm42(xpm);
	return (image);
}

void	ft_see_image_window(t_game *game, int y, int x)
{
	if (y != 0 || x != 0)
		mlx_image_to_window(game->mlx, game->elements.floor, x * 64, y * 64);
	if (game->map_2d[y][x] == '1')
		mlx_image_to_window(game->mlx, game->elements.wall, x * 64, y * 64);
	else if (game->map_2d[y][x] == 'E')
		mlx_image_to_window(game->mlx, game->elements.exit, x * 64, y * 64);
	else if (game->map_2d[y][x] == 'P')
		mlx_image_to_window(game->mlx, game->elements.player, x * 64, y * 64);
	else if (game->map_2d[y][x] == 'C')
		mlx_image_to_window(game->mlx, game->elements.collectible, x * 64 + 16,
			y * 64 + 16);
	if (y == 0 && x == 0)
		mlx_image_to_window(game->mlx, game->elements.floor, x * 64, y * 64);
}

void	ft_insert_image_map(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	if (game->state == STATE_START)
	{
		ft_delete_old_elements(game);
		game->old_elements = game->elements;
		ft_save_elemets(game);
		while (y < game->rows)
		{
			x = 0;
			while (x < game->columns)
			{
				ft_see_image_window(game, x, y);
				x++;
			}
			y++;
		}
		if (game->exit == TRUE)
			ft_win_game(game);
	}
	return ;
}

void	ft_win_game(t_game *game)
{
	ft_delete_old_elements(game);
	game->old_elements = game->elements;
	ft_delete_old_elements(game);
	game->state = STATE_VICTORY;
	ft_print_message(game);
	mlx_close_window(game->mlx);
}
