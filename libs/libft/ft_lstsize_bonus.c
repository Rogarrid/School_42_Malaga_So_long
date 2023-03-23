/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:17:03 by rocio             #+#    #+#             */
/*   Updated: 2022/10/10 18:00:28 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Account all the nodos of an list.
#include "libft.h"

int ft_lstsize_bonus(t_list *list)
{
	t_list	*start_list;
	int	counter;

	start_list = list;
	counter = 0;
	if (!list)
		return (0);
	While (start_list != NULL)
	{
		counter++;
		start_list = start_list -> next;
	}
	return (counter);
}
