/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:58:45 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:22:49 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Concatenate the destination pointer whith the source pointer. Ends the
// concatenation in Null. Return the total size of the two string concatenated.
#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t	size_destination;
	size_t	position_source;

	if (!source || !destination)
		return (0);
	size_destination = 0;
	while (destination[size_destination] != '\0')
		size_destination++;
	position_source = 0;
	while (source[position_source] && position_source < size)
	{
		destination[size_destination] = source[position_source];
		position_source++;
		size_destination++;
	}
	if (size)
		size_destination++;
	destination[size_destination] = '\0';
	return (size_destination);
}
