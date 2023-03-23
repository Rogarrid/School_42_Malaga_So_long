/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map_2d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:18:17 by rocio             #+#    #+#             */
/*   Updated: 2023/03/21 12:28:32 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//crear mapa 2d a través de array simple el cual se irá dividiendo a través del
//carácter /n
char	**ft_create_map_2d(char *str_map)
{
	return (ft_split(str_map, '\n'));
}

//Liberar mapa.
void	ft_free_map_2d(char **map_2d)
{
	int	index;

	index = 0;
	if (map_2d == NULL)
		return ;
	while (map_2d[index])
	{
		free(map_2d[index]);
		index++;
	}
	free(map_2d);
	map_2d = NULL;
}
