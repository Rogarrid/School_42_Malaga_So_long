/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:34:09 by rocio             #+#    #+#             */
/*   Updated: 2023/02/23 13:32:30 by rogarrid         ###   ########.fr       */
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
