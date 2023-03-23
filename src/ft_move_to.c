/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:29:51 by rocio             #+#    #+#             */
/*   Updated: 2023/03/16 17:44:27 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_up(t_game *game)
{
	int	x;
	int	y;

	y = -1;
	while (++y < game->rows)
	{
		x = -1;
		while (++x < game->columns)
		{
			if (game->map_2d[y][x] == 'P')
			{
				if (game->map_2d[y - 1][x] == '0' || game->map_2d[y
					- 1][x] == 'C' || game->map_2d[y - 1][x] == 'E')
				{
					if (ft_check_collec_exit(game, game->map_2d[y - 1][x]) == 1)
						return ;
					game->map_2d[y - 1][x] = 'P';
					game->map_2d[y][x] = '0';
					game->move_counter++;
					ft_printf("Moves:%d\n", game->move_counter);
					return ;
				}
			}
		}
	}
}

void	ft_move_down(t_game *game)
{
	int	x;
	int	y;

	y = -1;
	while (++y < game->rows)
	{
		x = -1;
		while (++x < game->columns)
		{
			if (game->map_2d[y][x] == 'P')
			{
				if (game->map_2d[y + 1][x] == '0' || game->map_2d[y
					+ 1][x] == 'C' || game->map_2d[y + 1][x] == 'E')
				{
					if (ft_check_collec_exit(game, game->map_2d[y + 1][x]) == 1)
						return ;
					game->map_2d[y + 1][x] = 'P';
					game->map_2d[y][x] = '0';
					game->move_counter++;
					ft_printf("Moves:%d\n", game->move_counter);
					return ;
				}
			}
		}
	}
}

void	ft_move_right(t_game *game)
{
	int	x;
	int	y;

	y = -1;
	while (++y < game->rows)
	{
		x = -1;
		while (++x < game->columns)
		{
			if (game->map_2d[y][x] == 'P')
			{
				if (game->map_2d[y][x + 1] == '0' || game->map_2d[y][x
					+ 1] == 'C' || game->map_2d[y][x + 1] == 'E')
				{
					if (ft_check_collec_exit(game, game->map_2d[y][x + 1]) == 1)
						return ;
					game->map_2d[y][x + 1] = 'P';
					game->map_2d[y][x] = '0';
					game->move_counter++;
					ft_printf("Moves:%d\n", game->move_counter);
					return ;
				}
			}
		}
	}
}

void	ft_move_left(t_game *game)
{
	int	x;
	int	y;

	y = -1;
	while (++y < game->rows)
	{
		x = -1;
		while (++x < game->columns)
		{
			if (game->map_2d[y][x] == 'P')
			{
				if (game->map_2d[y][x - 1] == '0' || game->map_2d[y][x
					- 1] == 'C' || game->map_2d[y][x - 1] == 'E')
				{
					if (ft_check_collec_exit(game, game->map_2d[y][x - 1]) == 1)
						return ;
					game->map_2d[y][x - 1] = 'P';
					game->map_2d[y][x] = '0';
					game->move_counter++;
					ft_printf("Moves:%d\n", game->move_counter);
					return ;
				}
			}
		}
	}
}

int	ft_check_collec_exit(t_game *game, char character)
{
	if (character == 'C')
	{
		game->collectible_count--;
		if (game->collectible_count == 0)
			ft_printf("¡Todas las pócimas recogidas!¡Regresemos!\n");
	}
	else if (character == 'E' && game->collectible_count != 0)
	{
		ft_printf("!No puedes irte, todavía hay pócimas sin recoger!\n");
		return (1);
	}
	else if (character == 'E' && game->collectible_count == 0)
	{
		game->exit_flag = 1;
	}
	return (0);
}
