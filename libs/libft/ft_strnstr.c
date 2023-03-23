/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:39:01 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:31:30 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Find the little string in the big string inside of the length given. Return 
// Null if the little string isn't in the big string, return the big string if 
// little string is empty or return the string to search for if it is in the 
// big string.
#include "libft.h"

char	*ft_strnstr(const char *str_big, const char *str_little, size_t length)
{
	size_t	counter_string_big;
	size_t	counter_string_little;
	size_t	length_string_little;

	counter_string_big = 0;
	counter_string_little = 0;
	length_string_little = ft_strlen(string_little);
	if (length_string_little == 0)
		return ((char *) string_big);
	while (counter_string_big < length)
	{
		while (string_little[counter_string_little]
			== string_big[counter_string_big])
		{
			counter_string_little++;
		}
		if (string_little[counter_string_little] == '\0')
			return ((char *)string_little);
		counter_string_big++;
	}
	return (NULL);
}
