/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:58:47 by lfrank            #+#    #+#             */
/*   Updated: 2023/02/23 13:30:32 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strlen() function computes the length of the string s.  The strnlen()
function attempts to compute the length of s, but never scans beyond the
first maxlen bytes of s. */

size_t	ft_strlen(char *string)
{
	int	length;

	length = 0;
	if (!string)
		return (0);
	while (*string != '\0')
	{
		length++;
		string++;
	}
	return (length);
}
