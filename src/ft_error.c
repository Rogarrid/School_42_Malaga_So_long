/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:53:59 by lfrank            #+#    #+#             */
/*   Updated: 2023/03/13 12:03:37 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ESTE VA FUERA!!!!

#include "so_long.h"

void	ft_error_message(char *str, int error)
{
	if (!str)
	{
		ft_printf("Error: ./so_long");
	}
	else
	{
		write(2, "Error\n", 7);
		ft_printf("%s", str);
	}
	(void)error;
	exit(error);
}

void	ft_print_error(char *string)
{

	ft_printf("%s", string);
	(void)1;
	exit(1);
}
