/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:45:44 by rocio             #+#    #+#             */
/*   Updated: 2023/03/10 12:08:31 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_file(char *map_path)
{
	int	end;

	end = ft_strlen(map_path) - 1;
	if (map_path[end] != 'r')
		ft_error_message(E_FORMAT, 1);
	end--;
	if (map_path[end] != 'e')
		ft_error_message(E_FORMAT, 1);
	end--;
	if (map_path[end] != 'b')
		ft_error_message(E_FORMAT, 1);
	end--;
	if (map_path[end] != '.')
		ft_error_message(E_FORMAT, 1);
}

char	*ft_read_map(char *map_path)
{
	char	*str_map;
	int		fd;
	char	c;
	int		count;

	count = 0;
	ft_check_file(map_path);
	fd = open(map_path, O_RDONLY);
	if (fd < 0)
		ft_error_message(E_FILE, 1);
	while (read(fd, &c, 1) == 1)
	{
		count++;
	}
	if (count == 0)
		ft_error_message(E_EMPTYFILE, 1);
	str_map = (char *)malloc(sizeof(char) * (count + 1));
	if (!str_map)
		ft_error_message(E_MALLOC, 1);
	close(fd);
	fd = open(map_path, O_RDONLY);
	read(fd, str_map, count);
	str_map[count] = '\0';
	return (str_map);
}
