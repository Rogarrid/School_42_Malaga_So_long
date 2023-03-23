/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:36:39 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 17:50:08 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether a character is a printable character or not.
#include "libft.h"

int	ft_isprint(int character)
{
	if (character >= 32 && character <= 127)
		return (1);
	else
		return (0);
}
