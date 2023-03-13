/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_way.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:50:16 by rocio             #+#    #+#             */
/*   Updated: 2023/03/13 12:48:19 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_counter_columns(char **map_2d)
{
	int	column;
	int	row;
	int	rows;
	int	columns;
	int	count_columns;

	row = 0;
	count_columns = 0;
	rows = ft_counter_rows(map_2d);
	columns = ft_strlen(map_2d[0]);
	while (row < rows)
	{
		column = 0;
		while (column < columns)
		{
			if (map_2d[row][column] == 'C')
			{
				count_columns++;
			}
			column++;
		}
		row++;
	}
	return (count_columns);
}

void	ft_floodfill(t_game *game, int column, int row, int *count_columns)
{
	if (column <= 0 || column >= game->columns || row <= 0 || row >= game->rows
		|| game->map_2d[row][column] == '1' || game->map_2d[row][column] == 'c'
		|| game->map_2d[row][column] == 'o' || game->map_2d[row][column] == 'e'
		|| game->map_2d[row][column] == 'E')
	{
		if (game->map_2d[row][column] == 'E')
			game->exit_game = 1;
		return ;
	}
	if (game->map_2d[row][column] == 'C')
	{
		(*count_columns)--;
		game->map_2d[row][column] = 'c';
	}
	else if (game->map_2d[row][column] == '0')
		game->map_2d[row][column] = 'o';
	ft_floodfill(game, column, (row + 1), count_columns);
	ft_floodfill(game, column, (row - 1), count_columns);
	ft_floodfill(game, (column + 1), row, count_columns);
	ft_floodfill(game, (column - 1), row, count_columns);
}

//las minúsculas las convierte en mayúscula
void	ft_restore(char **map_2d)
{
	int	column;
	int	row;
	int	rows;
	int	columns;

	row = 0;
	rows = ft_counter_rows(map_2d);
	columns = ft_strlen(map_2d[0]);
	while (row < rows)
	{
		column = 0;
		while (column < columns)
		{
			if (map_2d[row][column] == 'c')
				map_2d[row][column] = 'C';
			else if (map_2d[row][column] == 'e')
				map_2d[row][column] = 'E';
			else if (map_2d[row][column] == 'o')
				map_2d[row][column] = '0';
			column++;
		}
		row++;
	}
}

void	ft_check_way(t_game *game)
{
	int	column;
	int	row;
	int	count_columns;

	row = 0;
	count_columns = ft_counter_columns(game->map_2d);
	while (row < game->rows)
	{
		column = 0;
		while (column < game->columns)
		{
			if (game->map_2d[row][column] == 'P')
			{
				ft_floodfill(game, column, row, &count_columns);
				if (count_columns != 0)
					ft_print_error("No hay camino, ¡no puedo saltar muros!\n");
				ft_restore(game->map_2d);
				if (game->exit_game == 0)
					ft_print_error("No hay camino, ¡no puedo saltar muros!\n");
				return ;
			}
			column++;
		}
		row++;
	}
}
