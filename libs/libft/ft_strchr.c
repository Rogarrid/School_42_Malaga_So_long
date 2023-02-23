/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:58:34 by lfrank            #+#    #+#             */
/*   Updated: 2023/02/23 13:31:40 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strchr() function locates the first occurrence of c (converted to a
char) in the string pointed to by s.
The terminating null character is considered to be part of the string;
therefore if c is `\0', the functions locate the terminating `\0'. */

char	*ft_strchr(char *string, int character)
{
	int		counter;

	counter = 0;
	if (!string || !character)
		return (0);
	if (string[counter] == character)
		return ((char *)string + counter);
	while (string [counter])
	{
		if (string[counter] == character)
			return ((char *)string + counter);
		counter++;
	}
	return (0);
}
