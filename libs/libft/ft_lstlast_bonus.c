/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:30:35 by rocio             #+#    #+#             */
/*   Updated: 2022/10/10 18:27:43 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Return last nodo the list.
#include "libft.h"

t_list	*ft_lstlast_bonus(t_list *list)
{
	t_list	last_nodo_list;

	last_nodo_list = list;
	if (!list)
		return ;
	while (last_nodo_list != NULL)
		last_nodo_list = last_nodo_list -> next;
	return (last_nodo_list);
}
