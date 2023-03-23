/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:36:21 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 17:49:29 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether a character is a number character or not.
#include "libft.h"

int	ft_isdigit(int character)
{
	if (character >= 0 && character <= 9)
		return (1);
	else
		return (0);
}
