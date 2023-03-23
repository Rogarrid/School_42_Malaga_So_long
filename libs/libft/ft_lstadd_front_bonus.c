/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:51:25 by rocio             #+#    #+#             */
/*   Updated: 2022/10/10 18:00:16 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Add the nodo "new" the beginning the "list".
#include "libft.h"

void	ft_lstadd_front_bonus(t_list **list, t_list *new);
{
	if (!new)
		return ;
	if (!list)
	{
		*list = new;
		return ;
	}
	new -> next = *list;
	*list = new;
}
