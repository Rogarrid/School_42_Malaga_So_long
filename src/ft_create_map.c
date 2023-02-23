/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:18:17 by rocio             #+#    #+#             */
/*   Updated: 2023/02/23 13:45:32 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//Formar el array 2D
char	**ft_string_to_2d(char *str_map)
{
	return (ft_split(str_map, '\n'));
}

//Lee el mapa para crear un array 2d a través del split

char	*ft_read_map(char *map_path)
{
	char	*map;
	int		file_descriptor;
	char	character_read;
	int		counter;

	counter = 0;
	file_descriptor = open(map_path, O_RDONLY);
	if (file_descriptor < 0)
		printf("error archivo_1");
	while (read(file_descriptor, &character_read, 1) == 1)
	{
		counter++;
	}
	if (counter == 0)
		printf("error archivo_2");
	map = (char *)ft_calloc(sizeof(char), (counter + 1));
	if (!map)
		printf("error malloc");
	close(file_descriptor);
	file_descriptor = open(map_path, O_RDONLY);
	read(file_descriptor, map, counter);
	close(file_descriptor);
	map[counter] = '\0';
	return (map);
}

//liberar mapa una vez usado.
void	ft_free_map_2d(char **map_2d)
{
	int	counter;

	counter = 0;
	if (map_2d == NULL)
		return ;
	while (map_2d[counter])
	{
		free(map_2d[counter]);
		counter++;
	}
	free(map_2d);
	map_2d = NULL;
}
