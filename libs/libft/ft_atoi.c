/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:27:45 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 17:17:28 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert an string in an integer.
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	count;
	long	convert_int;
	int		is_negative;

	count = 0;
	convert_int = 0;
	is_negative = 0;
	while (str[count] != '\0' && (str[count] == ' ' || str[count] == '\t'
			|| str[count] == '\n' || str[count] == '\r'
			|| str[count] == '\v' || str[count] == '\f' || str[count] == '+'))
		count++;
	if (str[count] != '\0' && str[count] == '-')
	{
		is_negative = 1;
		count++;
	}
	while (str[count] != '\0' && str[count] >= '0' && str[count] <= '9')
	{
		convert_int = (convert_int * 10) + (str[count] - '0');
		count++;
	}
	if (is_negative == 1)
		return (-convert_int);
	return (convert_int);
}
