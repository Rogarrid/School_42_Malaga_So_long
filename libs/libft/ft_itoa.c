/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:02:15 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/04 11:58:18 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert an int in char.
#include "libft.h"

size_t	ft_size_int(int number)
{
	size_t	size;

	size = 0;
	if (number > 0)
		size = 0;
	else
		size = 1;
	return (size);
}

long	ft_sign_number(int number)
{
	long	number_sign;

	if (number > 0)
		number_sign = number;
	else
		number_sign = -number;
	return (number_sign);
}

char	*ft_itoa(int number)
{
	char	*string;
	size_t	size;
	long	number_sign;

	size = ft_size_int(number);
	number_sign = ft_sign_number(number);
	while (number)
	{
		number = number / 10;
		size++;
	}
	string = (char *)malloc(size + 1 * sizeof(char));
	if (!string)
		return (NULL);
	string[size--] = '\0';
	while (number_sign > 0)
	{
		string[size--] = number_sign % 10 + '0';
		number_sign = number_sign / 10;
	}
	if (size == 0 && string[1] == '\0')
		string[size] = '0';
	else if (size == 0 && string[1] != '\0')
		string[size] = '-';
	return (string);
}
