/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:27:36 by rocio             #+#    #+#             */
/*   Updated: 2023/02/16 10:22:13 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
//Este archivo chequea el formato del archivo, ancho del mapa y que los elemen-
//tos que aparecen en el mapa sean los pedidos por el proyecto (1,0,C,P,E).

//chequea que sea .ber
int	ft_check_format_file(char *string)
{
	size_t	length;
	int		check;

	check = 4;
	length = ft_strlen(string) - 1;
	if (string[length--] != 'r')
		check--;
	else if (string[length--] != 'e')
		check--;
	else if (string[length--] != 'b')
		check--;
	else if (string[length--] != '.')
		check--;
	return (check);
}

//chequea que el mapa tenga elementos válidos
int	ft_check_char(char character)
{
	int		check;
	int		counter;
	char	*characteres;

	characteres = "10CEP\n";
	check = 0;
	counter = 0;
	while (characteres[counter] != '\0' && check == 0)
	{
		if (characteres[counter] == character)
			check = 1;
		counter++;
	}
	return (check);
}

//manda a chequear los elementos del mapa
int	ft_check_elements_map(int file_descriptor)
{
	int		correct_char;
	char	*row_map;
	int		counter;

	correct_char = 1;
	counter = 0;
	row_map = get_next_line(file_descriptor);
	while (row_map != NULL)
	{
		while (row_map[counter] != '\0' && correct_char == 1)
		{
			correct_char = ft_check_char(row_map[counter]);
			counter++;
		}
		counter = 0;
		free(row_map);
		row_map = get_next_line(file_descriptor);
	}
	if (correct_char == 0)
		printf("Error mapa caracter\n");
	return (correct_char);
}

//chequea que sea un rectangulo.
//Guarda número de columnas en estructura.
int	ft_check_width(int file_descriptor)
{
	char	*row_read;
	int		correct_rows;
	size_t	size_row1;
	t_game	game;

	row_read = get_next_line(file_descriptor);
	size_row1 = ft_strlen_width(row_read);
	game.columns = size_row1;
	correct_rows = 1;
	free(row_read);
	row_read = get_next_line(file_descriptor);
	while (row_read != NULL && correct_rows == 1)
	{
		if (ft_strlen_width(row_read) != size_row1)
			correct_rows = 0;
		free(row_read);
		row_read = get_next_line(file_descriptor);
	}
	if (correct_rows == 0)
		printf("Error mapa longitud\n");
	return (correct_rows);
}
