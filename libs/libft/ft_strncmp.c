/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:15:12 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/05 17:57:40 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compare the n frist bytes of string1 with string2, and return integer
//positive, negative or cero.
#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t numb_bytes)
{
	size_t	counter;

	counter = 0;
	while (counter < numb_bytes)
	{
		if (string1 [counter] < string2[counter])
			return (-1);
		else if (string1 [counter] > string2[counter])
			return (1);
		counter++;
	}
	return (0);
}
