/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:21:09 by rocio             #+#    #+#             */
/*   Updated: 2023/02/24 13:36:51 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//Este archivo chequea el número de veces que aparece jugador, coleccionable o
//salida

int	ft_check_number_elements(int file_descriptor, t_game *game)
{
	char	*row_map;
	int		counter;
	int		collec_number;
	int		exit_and_position_number;

	collec_number = 0;
	exit_and_position_number = 0;
	row_map = get_next_line(file_descriptor);
	while (row_map != NULL)
	{
		counter = 0;
		while (row_map[counter++] != '\0')
		{
			if (row_map[counter] == 'C')
				collec_number++;
			else if (row_map[counter] == 'E' || row_map[counter] == 'P')
				exit_and_position_number++;
		}
		free(row_map);
		row_map = get_next_line(file_descriptor);
	}
	if (exit_and_position_number != 2 || collec_number < 1)
		return (0);
	game->collectible_count = collec_number;
	return (1);
}

//Abre el archivo para que pueda ser analizado por la función de arriba,
//ver cuantas veces aparece cada elemento.
int	ft_open_map_check_elements(char *string, t_game *game)
{
	int	file_descriptor;
	int	elements;

	elements = 0;
	file_descriptor = open(string, O_RDONLY);
	if (file_descriptor == -1)
		printf("Error apertura_5\n");
	else
		elements = ft_check_number_elements(file_descriptor, game);
	close(file_descriptor);
	return (elements);
}

//Cuenta las filas totales para chequear si el mapa está rodeado por muro.
//Guarda número de filas en estructura.
int	ft_max_row(char	**map_2d)
{
	int		row;
	//t_game	game;

	row = 0;
	while (map_2d[row] != NULL)
	{
		row++;
	}
	row -= 1;
	return (row);
}

//chequea si el mapa está rodeado por muro.
int	ft_validate_wall(char **map_2d)
{
	t_game	game;
	int		row;
	int		columns;

	row = 0;
	columns = 0;
	while (map_2d[row] != NULL)
	{
		while (map_2d[row][columns] != '\0')
		{
			if (row == 0 && map_2d[0][columns] != '1')
				return (0);
			if (row > 0 && row < ft_max_row(map_2d) && map_2d[row][0] != '1'
				&& columns == 0)
				return (0);
			else if (row > 0 && row < ft_max_row(map_2d)
				&& map_2d[row][ft_strlen(map_2d[row]) - 1] != '1')
				return (0);
			else if (row == ft_max_row(map_2d) && map_2d[row][columns] != '1')
				return (0);
			columns++;
		}
		if (row < 1)
			game.columns = columns;
		row++;
		columns = 0;
	}
	game.rows = row;
	return (1);
}
