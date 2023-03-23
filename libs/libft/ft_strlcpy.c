/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:19:53 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:24:14 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies the size limit given from source pointer to the destination pointer. 
//Ends the string in Null. Return the total size of the newly created string.
#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	size_source;
	size_t	position;

	if (!source || !destination)
		return (0);
	size_source = 0;
	while (source[size_source])
		size_source++;
	position = 0;
	while (source[position] && position < size - 1)
	{
		destination[position] = source[position];
		position++;
	}
	if (size)
		destination[position] = '\0';
	return (size_source);
}
