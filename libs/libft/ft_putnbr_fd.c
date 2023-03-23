/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:24:02 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/05 11:30:22 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Send the "number" the file descriptor given.
#include "unistd.h"
#include "libft.h"

void	ft_putnbr_fd(int number, int file_descriptor)
{
	char	int_in_char;

	if (!n)
		return ;
	int_in_char = ft_itoa(number);
	ft_putchar_fd(int_in_char, file_descriptor);
}
