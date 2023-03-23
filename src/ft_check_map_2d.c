/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_2d.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:00:22 by rocio             #+#    #+#             */
/*   Updated: 2023/03/21 12:31:19 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//cuenta las filas
int	ft_counter_rows(char **map_2d)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (map_2d[index] != 0)
	{
		counter++;
		index++;
	}
	return (counter);
}

//Contabilizar filas y columnas.
//Chequea que el mapa esté rodeado de muralla.
void	ft_check_map_2d(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	game->rows = ft_counter_rows(game->map_2d);
	game->columns = ft_strlen(game->map_2d[0]);
	while (y < game->rows)
	{
		x = 0;
		while (x < game->columns)
		{
			if (x == 0 && game->map_2d[y][x] != '1')
				ft_print_error("El mapa no está rodeado por murallas\n");
			if (y == 0 && game->map_2d[y][x] != '1')
				ft_print_error("El mapa no tiene murallas\n");
			if (x == game->columns - 1 && game->map_2d[y][x] != '1')
				ft_print_error("El mapa no tiene murallas\n");
			if (y == game->rows - 1 && game->map_2d[y][x] != '1')
				ft_print_error("El mapa no tiene murallas\n");
			x++;
		}
		y++;
	}
}
