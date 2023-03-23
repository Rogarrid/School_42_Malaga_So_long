/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_way.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:50:16 by rocio             #+#    #+#             */
/*   Updated: 2023/03/21 13:06:43 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_counter_collectible(char **map_2d)
{
	int	column;
	int	row;
	int	rows;
	int	columns;
	int	count_collectibles;

	row = 0;
	count_collectibles = 0;
	rows = ft_counter_rows(map_2d);
	columns = ft_strlen(map_2d[0]);
	while (row < rows)
	{
		column = 0;
		while (column < columns)
		{
			if (map_2d[row][column] == 'C')
			{
				count_collectibles++;
			}
			column++;
		}
		row++;
	}
	return (count_collectibles);
}

//Cuando se ve donde está el jugador aquí baja hasta la recursividad y
//mirá una posición más arriba y abajo del jugador y a la derecha e izquierda.
//esto lo hace con row+-1 y colum+-1, para ver pr donde ha pasado el 0 lo
//convierte en o y si vuelve a pasar por ahí o es salida salé de la función.
//resta un coleccionable cuando lo encuentra y lo conierte en c.
//sale cuando encuentra alguna de las variables cambiadas, porque está
//dando vuelta o porque encuentra una E, cambia la si hay salida a 1 y sale.

void	ft_save_coll(t_game *game, int colum, int row, int *c_coll)
{
	if (colum <= 0 || colum >= game->columns || row <= 0 || row >= game->rows
		|| game->map_2d[row][colum] == '1' || game->map_2d[row][colum] == 'c'
		|| game->map_2d[row][colum] == 'o' || game->map_2d[row][colum] == 'e'
		|| game->map_2d[row][colum] == 'E')
	{
		if (game->map_2d[row][colum] == 'E')
			game->exit_game = 1;
		return ;
	}
	if (game->map_2d[row][colum] == 'C')
	{
		(*c_coll)--;
		game->map_2d[row][colum] = 'c';
	}
	else if (game->map_2d[row][colum] == '0')
		game->map_2d[row][colum] = 'o';
	ft_save_coll(game, colum, (row + 1), c_coll);
	ft_save_coll(game, colum, (row - 1), c_coll);
	ft_save_coll(game, (colum + 1), row, c_coll);
	ft_save_coll(game, (colum - 1), row, c_coll);
}

//las minúsculas las convierte en mayúscula
void	ft_restore_value(char **map_2d)
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

//Número total de coleccionables.
//Da error si los coleccionables no se han reunido todos o si
//no hay salida posible.

void	ft_check_way(t_game *game)
{
	int	column;
	int	row;
	int	count_collectibles;

	row = 0;
	count_collectibles = ft_counter_collectible(game->map_2d);
	while (row < game->rows)
	{
		column = 0;
		while (column < game->columns)
		{
			if (game->map_2d[row][column] == 'P')
			{
				ft_save_coll(game, column, row, &count_collectibles);
				if (count_collectibles != 0)
					ft_print_error("No hay camino, ¡no puedo saltar muros!\n");
				ft_restore_value(game->map_2d);
				if (game->exit_game == 0)
					ft_print_error("No hay camino, ¡no puedo saltar muros!\n");
				return ;
			}
			column++;
		}
		row++;
	}
}
