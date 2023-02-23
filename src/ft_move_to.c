/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_to.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:29:51 by rocio             #+#    #+#             */
/*   Updated: 2023/02/16 16:42:02 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_to_up(t_game *game)
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
					printf("Moves:%d\n", game->move_counter);
					return ;
				}
			}
		}
	}
}

void	ft_move_to_left(t_game *game)
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
					printf("Moves:%d\n", game->move_counter);
					return ;
				}
			}
		}
	}
}


void	ft_move_to_right(t_game *game)
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
					printf("Moves:%d\n", game->move_counter);
					return ;
				}
			}
		}
	}
}

void	ft_move_to_down(t_game *game)
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
					printf("Moves:%d\n", game->move_counter);
					return ;
				}
			}
		}
	}
}

int	ft_check_collec_exit(t_game *game, char elements)
{
	if (elements == 'C')
	{
		game->collectible_count--;
		if (game->collectible_count == 0)
			printf("Yeay! Let's go home and prepare dinner!\n");
	}
	else if (elements == 'E' && game->collectible_count != 0)
	{
		printf("Let's get all these nuts!\n");
		return (1);
	}
	else if (elements == 'E' && game->collectible_count == 0)
	{
		game->exit = TRUE;
	}
	return (0);
}
