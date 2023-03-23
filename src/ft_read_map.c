/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:45:44 by rocio             #+#    #+#             */
/*   Updated: 2023/03/21 12:19:20 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//Lee el fd entero en el bucle y comprueba si hay errores.
//Crear array largo como bytes leídos, lee en mapa y lo escribe todo en una
// misma línea

void	ft_check_format_file(char *map_path)
{
	int	end;

	end = ft_strlen(map_path) - 1;
	if (map_path[end] != 'r')
		ft_print_error("Formato equivocado, tiene que ser un .ber\n");
	end--;
	if (map_path[end] != 'e')
		ft_print_error("Formato equivocado, tiene que ser un .ber\n");
	end--;
	if (map_path[end] != 'b')
		ft_print_error("Formato equivocado, tiene que ser un .ber\n");
	end--;
	if (map_path[end] != '.')
		ft_print_error("Formato equivocado, tiene que ser un .ber\n");
}

//Primero lee todo el FD y se ven cuantos bytes tiene, luego se crea el array
//que es igual de largo como bytes, se cierra archivo y se vuelve a leer
//usando como buffer el array creado y como bytes totales a leer el mapa entero.
// el array tiene + 1 para el salto de línea último y luego se
//le añade el final de línea.
char	*ft_read_map(char *map_path)
{
	char	*map_read;
	int		file_desciptor;
	char	buffer;
	int		counter;

	counter = 0;
	ft_check_format_file(map_path);
	file_desciptor = open(map_path, O_RDONLY);
	if (file_desciptor < 0)
		ft_print_error("No se ha podido abrir el archivo\n");
	while (read(file_desciptor, &buffer, 1) == 1)
	{
		counter++;
	}
	if (counter == 0)
		ft_print_error("No hay nada que leer\n");
	map_read = (char *)malloc(sizeof(char) * (counter + 1));
	if (!map_read)
		ft_print_error("Error al crear el malloc\n");
	close(file_desciptor);
	file_desciptor = open(map_path, O_RDONLY);
	read(file_desciptor, map_read, counter);
	map_read[counter] = '\0';
	return (map_read);
}
