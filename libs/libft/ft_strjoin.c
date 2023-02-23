/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:58:39 by lfrank            #+#    #+#             */
/*   Updated: 2023/02/23 13:29:19 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strjoin() function allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of ’s1’ and ’s2’. */

char	*ft_strjoin(char *str_1, char *str_2)
{
	char	*nw_str;
	size_t	counter;
	size_t	index;

	if (!str_1)
	{
		str_1 = (char *)malloc(1 * sizeof(char));
		str_1[0] = '\0';
	}
	if (!str_1 || !str_2)
		return (NULL);
	nw_str = malloc((ft_strlen(str_1) + ft_strlen(str_2) + 1) * sizeof(char));
	if (nw_str == NULL)
		return (NULL);
	index = -1;
	counter = 0;
	if (str_1)
		while (str_1[++index])
			nw_str[index] = str_1[index];
	while (str_2[counter])
		nw_str[index++] = str_2[counter++];
	nw_str [ft_strlen(str_1) + ft_strlen(str_2)] = '\0';
	free(str_1);
	return (nw_str);
}
