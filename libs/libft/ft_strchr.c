/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:19:18 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:17:30 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Search the character given in the string and return pointer where the 
//character appeare for frist time. If it isn't find return Null. 
#include "libft.h"

char	*ft_strchr(const char *string, int character)
{
	while (*string && *string != character)
		string++;
	if (*string == character)
		return ((char *)string);
	return (NULL);
}
