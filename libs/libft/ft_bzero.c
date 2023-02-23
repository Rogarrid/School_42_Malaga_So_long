/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:57:44 by lfrank            #+#    #+#             */
/*   Updated: 2023/02/23 13:42:24 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The bzero() function copies n bytes (b),
each with a value of zero, into string s */

void	ft_bzero(void *directation_memory, size_t number_bytes)
{
	ft_memset(directation_memory, '\0', number_bytes);
}
