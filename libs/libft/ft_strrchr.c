/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:20:25 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:32:52 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Search the character given in the string and return pointer where the 
//character appeare for last time. If it isn't find return Null. 
#include "libft.h"

char	*ft_strrchr(const char *string, int character)
{
	size_t	size_string;

	size_string = ft_strlen(string);
	while (size_string > 0)
	{
		if (string[size_string] == character)
			return ((char *)string + size_string);
		size_string--;
	}
	return (NULL);
}
