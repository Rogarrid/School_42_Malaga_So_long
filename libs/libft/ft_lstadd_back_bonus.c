/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:08 by rocio             #+#    #+#             */
/*   Updated: 2022/10/10 18:29:54 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Add the nodo "new" the beginning the "list".
#include "libft.h"

void	ft_lstadd_back_bonus(t_list **list, t_list *new)
{
	t_list *aux;

	if (!new)
		return ;
	if (!*list)
	{
		*list = new;
		return	;
	}
aux = ft_lstlast_bonus(*list);
new -> next = *aux;
*aux = new;
}
