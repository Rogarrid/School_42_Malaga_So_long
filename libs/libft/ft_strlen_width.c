/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:33:03 by rogarrid          #+#    #+#             */
/*   Updated: 2023/02/23 13:33:16 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
