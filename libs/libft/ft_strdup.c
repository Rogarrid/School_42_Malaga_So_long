/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:02:34 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:20:28 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Duplicate an string in other.
#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*string_duplicate;
	int		counter;

	counter = 0;
	string_duplicate = (char *)malloc(ft_strlen(string) * sizeof(char));
	while (string[counter] != '\0')
	{
		string_duplicate[counter] = string[counter];
		counter++;
	}
	if (!string_duplicate)
		return (NULL);
	return (string_duplicate);
}
