/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:57:46 by lfrank            #+#    #+#             */
/*   Updated: 2023/02/23 13:41:41 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The calloc() function contiguously allocates enough space for count
objects that are size bytes of memory each and returns a pointer to the
allocated memory. The allocated memory is filled with bytes of value zero.*/

void	*ft_calloc(size_t number_items, size_t size)
{
	void	*matrix;

	matrix = (void *)malloc(size * number_items);
	if (!matrix)
		return (NULL);
	ft_bzero(matrix, size * number_items);
	return (matrix);
}
