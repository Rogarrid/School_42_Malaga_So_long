/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:48:51 by rocio             #+#    #+#             */
/*   Updated: 2022/12/01 09:22:34 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Lee un fd el buffer_size indicado y devuelve la primera línea, cuando hay /n

#include "get_next_line.h"

// donde line manda la información de save y la trabaja para imprimirla
char	*ft_print_line(char *save_line)
{
	char	*next_line_print;
	int		counter;

	counter = 0;
	if (!save_line[counter])
		return (NULL);
	while (save_line[counter] && save_line[counter] != '\n')
		counter++;
	next_line_print = (char *)malloc(sizeof(char) * (counter + 2));
	if (!next_line_print)
		return (NULL);
	counter = 0;
	while (save_line[counter] && save_line[counter] != '\n')
	{
		next_line_print[counter] = save_line[counter];
		counter++;
	}
	if (save_line[counter] == '\n')
	{
		next_line_print[counter] = save_line[counter];
		counter++;
	}
	next_line_print[counter] = '\0';
	return (next_line_print);
}

// para que save mande la información de save y se trabaje su
//contenido para que quede lo que no se ha imprimido.
char	*ft_clean_save(char *save_line)
{
	char	*n_line;
	int		count;
	int		counter_new_string;

	count = 0;
	while (save_line[count] && save_line[count] != '\n')
		count++;
	if (!save_line[count])
	{
		free(save_line);
		return (NULL);
	}
	n_line = (char *)malloc(sizeof(char) * (ft_strlen(save_line) - count + 1));
	if (!n_line)
	{
		free(n_line);
		return (NULL);
	}
	count++;
	counter_new_string = 0;
	while (save_line[count])
		n_line[counter_new_string++] = save_line[count++];
	n_line[counter_new_string] = '\0';
	free (save_line);
	return (n_line);
}

// lea el archivo y lo guarde en un *buffer (malloc) ver su tamaño con la
// longitud de la string.
//strchr --> busca un character en una string.
// + Concadena lo que queda en save con lo que me va
//a mandar desde el buffer.
//Mandar a getnextline
char	*ft_read_save_next_line(int file_descriptor, char *save_line)
{
	char	*buffer;
	int		number_bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	number_bytes = 1;
	while (!ft_strchr(save_line, '\n') && number_bytes != 0)
	{
		number_bytes = read(file_descriptor, buffer, BUFFER_SIZE);
		if (number_bytes == -1)
		{
			free(buffer);
			free(save_line);
			return (NULL);
		}
		buffer[number_bytes] = '\0';
		save_line = ft_strjoin(save_line, buffer);
	}
	free(buffer);
	return (save_line);
}

//mandar archivo a leer con read a función --> save.
//	luego guardar lo que da en una variable estatica y a print
//	cuando lo guarde en la segunda borrar la parte pasada.
//hacer dos funciones, 1 donde line manda la:
//	información de save y la trabaja para imprimir la línea
//	save mande la información de save y se trabaje su contenido
//para que quede lo que no se ha imprimido.

char	*get_next_line(int file_descriptor)
{
	static char	*save_line;
	char		*line_return;

	if (file_descriptor < 0 || BUFFER_SIZE <= 0)
		return (0);
	save_line = ft_read_save_next_line(file_descriptor, save_line);
	if (!save_line)
		return (NULL);
	line_return = ft_print_line(save_line);
	save_line = ft_clean_save(save_line);
	return (line_return);
}
