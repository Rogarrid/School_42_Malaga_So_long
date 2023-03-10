/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:08:10 by rocio             #+#    #+#             */
/*   Updated: 2023/03/10 12:14:46 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	open_image(char *str)
{
	int	fd;

	fd = open(str, O_RDONLY);
	if (fd < 0)
		return (FALSE);
	close(fd);
	return (TRUE);
}

mlx_image_t	*ft_elements_to_image(mlx_t *mlx, char *img_path)
{
	xpm_t			*xpm;
	mlx_image_t		*img;
	mlx_texture_t	texture;

	if (open_image(img_path) == FALSE)
		ft_error_message(E_IMAGE, 1);
	xpm = mlx_load_xpm42(img_path);
	if (!xpm)
		ft_printf("\nxpm is null\n");
	texture = xpm->texture;
	img = mlx_texture_to_image(mlx, &texture);
	if (!img)
		ft_printf("\nimg is null\n");
	mlx_delete_xpm42(xpm);
	return (img);
}

void	ft_image_to_window(t_game *game, int x, int y)
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
	int			x;
	int			y;

	y = 0;
	if (game->state == STATE_START)
	{
		ft_clean_old_elements(game);
		game->old_elements = game->elements;
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
			ft_game_won(game);
	}
	return ;
}

void	ft_game_won(t_game *game)
{
	ft_clean_old_elements(game);
	game->old_elements = game->elements;
	ft_clean_old_elements(game);
	game->state = STATE_VICTORY;
	ft_print_alert(game);
	mlx_close_window(game->mlx);
}
