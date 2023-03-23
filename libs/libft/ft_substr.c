/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:26:23 by rocio             #+#    #+#             */
/*   Updated: 2022/09/30 13:12:56 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create an substring from to source string. "Start" indicates position where
//begin the substring and "lenght" indicate its lenght.

#include "libft.h"

char    *ft_substr(char const *string, unsigned int start, size_t lenght)
{
    char    *sub_string;
    size_t  counter;

    counter = 0;
    sub_string = (char *)ft_calloc(lenght, sizeof(char));
    while (counter < lenght)
    {
        sub_string[counter] = string[start];
        counter++;
        start++;
    }
    if (!string || !sub_string)
        return (0);
    return (sub_string);
}
