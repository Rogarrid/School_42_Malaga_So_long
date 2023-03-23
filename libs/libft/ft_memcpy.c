/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:18:17 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/03 09:04:38 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies the frist n bytes of the source pointer in the destination pointer.
//It can't superposition.
#include "libft.h"

void	*memcpy(void *destination, const void *source, size_t number_bytes)
{
	size_t	counter;

	counter = 0;
	if (destination == source || !number_bytes)
		return (destination);
	while (counter < number_bytes)
	{
		*((char *) destination + counter) = *((char *) source + counter);
		counter++;
	}
	return (destination);
}
