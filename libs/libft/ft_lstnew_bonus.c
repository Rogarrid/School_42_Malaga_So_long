/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:54:20 by rocio             #+#    #+#             */
/*   Updated: 2022/10/10 18:00:23 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create an new nodo using "malloc". The variable "content" is initialized
//with the content for parametre "content". The variable "next", whith Null.
#include "libft.h"

t_list	*ft_lstnew_bonus(void	*content)
{
	t_list	*new_nodo;

	if (!new_nodo)
		return (NULL);
	new_nodo = (t_list *)ft_calloc(sizeof(t_list));
	new_nodo -> content = content;
	new_nodo -> next = NULL;
	return (new_nodo)
}
