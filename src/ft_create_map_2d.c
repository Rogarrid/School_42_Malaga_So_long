/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map_2d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:18:17 by rocio             #+#    #+#             */
/*   Updated: 2023/03/10 12:18:58 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_create_map_2d(char *str_map)
{
	return (ft_split(str_map, '\n'));
}

void	ft_free_map_2d(char **map_2d)
{
	int	i;

	i = 0;
	if (map_2d == NULL)
		return ;
	while (map_2d[i])
	{
		free(map_2d[i]);
		i++;
	}
	free(map_2d);
	map_2d = NULL;
}
