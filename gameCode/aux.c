/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:34:09 by rocio             #+#    #+#             */
/*   Updated: 2023/02/13 12:43:14 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//*AUXILIARES*//

size_t	ft_strlen_width(char *string)
{
	int	length;

	length = 0;
	if (!string)
		return (0);
	while (*string != '\n')
	{
		length++;
		string++;
	}
	return (length);
}

size_t	ft_strlen(char *string)
{
	int	length;

	length = 0;
	if (!string)
		return (0);
	while (*string != '\0')
	{
		length++;
		string++;
	}
	return (length);
}

//**AUXILIARES**//

//Search the character given in the string and return pointer where the
//character appeare for frist time. If it isn't find return Null.

char	*ft_strchr(char *string, int character)
{
	int		counter;

	counter = 0;
	if (!string || !character)
		return (0);
	if (string[counter] == character)
		return ((char *)string + counter);
	while (string [counter])
	{
		if (string[counter] == character)
			return ((char *)string + counter);
		counter++;
	}
	return (0);
}

//Create new string with the concatenation of the string_1 and string_2.
// ver que lógica tiene empezar con index = -1
//ver que significa los ++ delante del index.
char	*ft_strjoin(char *str_1, char *str_2)
{
	char	*nw_str;
	size_t	counter;
	size_t	index;

	if (!str_1)
	{
		str_1 = (char *)malloc(1 * sizeof(char));
		str_1[0] = '\0';
	}
	if (!str_1 || !str_2)
		return (NULL);
	nw_str = malloc((ft_strlen(str_1) + ft_strlen(str_2) + 1) * sizeof(char));
	if (nw_str == NULL)
		return (NULL);
	index = -1;
	counter = 0;
	if (str_1)
		while (str_1[++index])
			nw_str[index] = str_1[index];
	while (str_2[counter])
		nw_str[index++] = str_2[counter++];
	nw_str [ft_strlen(str_1) + ft_strlen(str_2)] = '\0';
	free(str_1);
	return (nw_str);
}

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
char	*ft_read_save_next_line(int fd, char *save_line)
{
	char	*buffer;
	int		number_bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	number_bytes = 1;
	while (!ft_strchr(save_line, '\n') && number_bytes != 0)
	{
		number_bytes = read(fd, buffer, BUFFER_SIZE);
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

void	*ft_calloc(size_t number_items, size_t size)
{
	void	*matrix;

	matrix = (void *)malloc(size * number_items);
	if (!matrix)
		return (NULL);
	ft_bzero(matrix, size * number_items);
	return (matrix);
}

void	ft_bzero(void *directation_memory, size_t number_bytes)
{
	ft_memset(directation_memory, '\0', number_bytes);
}

void	*ft_memset(void *string, int character, size_t number_bytes)
{
	size_t	position;

	position = 0;
	while (position < number_bytes)
	{
		*((unsigned char *) string + position) = character;
		position++;
	}
	return (string);
}

static void	ft_free_all(char **str_tab, int index)
{
	index--;
	while (index >= 0)
	{
		free(str_tab[index]);
		index--;
	}
	free(str_tab);
}

static int	ft_count_str(char const *string, char character)
{
	int	count;
	int	seen_char;
	int	index;

	count = 0;
	seen_char = 1;
	index = 0;
	while (string[index] != '\0')
	{
		if (string[index] != character && seen_char == 1)
		{
			count++;
			seen_char = 0;
		}
		else if (string[index] == character)
			seen_char = 1;
		index++;
	}
	return (count);
}

static char	*ft_set_one_substr(int *start, char const *str, char cha)
{
	char	*substr;
	int		end;
	int		counter;

	counter = 0;
	end = *start;
	while (str[end] != cha && str[end] != '\0')
		end++;
	substr = (char *)ft_calloc(sizeof(char), (end - *start + 1));
	if (substr == NULL)
		return (NULL);
	while (*start < end)
	{
		substr[counter] = str[*start];
		counter++;
		(*start)++;
	}
	substr[counter] = '\0';
	return (substr);
}

static char	**ft_set_substr(char const *str, char cha, char **str_tab)
{
	int	start;
	int	counter;

	start = 0;
	counter = 0;
	while (str[start] != '\0')
	{
		if (str[start] != cha)
		{
			str_tab[counter] = ft_set_one_substr(&start, str, cha);
			if (str_tab[counter] == NULL)
			{
				ft_free_all(str_tab, counter);
				return (NULL);
			}
			counter++;
		}
		else
			start++;
	}
	str_tab[counter] = 0;
	return (str_tab);
}

char	**ft_split(char const *str, char character)
{
	char	**str_tab;

	str_tab = ft_calloc(sizeof(char *), (ft_count_str(str, character) + 1));
	if (str_tab == NULL)
		return (NULL);
	return (ft_set_substr(str, character, str_tab));
}
