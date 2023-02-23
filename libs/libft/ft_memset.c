/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:58:26 by lfrank            #+#    #+#             */
/*   Updated: 2023/02/23 13:43:00 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The memset() function writes len bytes of value c (converted to an
unsigned char) to the string b. */

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
