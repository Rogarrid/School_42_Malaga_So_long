/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:01:03 by rocio             #+#    #+#             */
/*   Updated: 2022/09/30 13:13:07 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create new string with the concatenation of the string_1 and string_2.
#include "libft.h"

char    *ft_strjoin(char const *string_1, char const *string_2)
{
    char    *new_string;
    size_t  lenght_new_string;
    int     counter_string_1;
    int     counter_string_2;

    lenght_new_string = ft_strlen (string_1) + ft_strlen (string_2);
    new_string = (char *)ft_calloc(lenght_new_string, sizeof(char));
    counter_string_1 = 0;
    while (string_1[counter_string_1] != '\0')
    {
        new_string[counter_string_1] = string_1[counter_string_1];
        counter_string_1++;
    }
    counter_string_2 = 0;
    while (string_2[counter_string_2] != '\0')
        new_string[counter_string_1++] = string_2[counter_string_2++];
    new_string[counter_string_1++] = '\0';
    if (!string_1 || !string_2 || !new_string)
        return (NULL);
    return (new_string);
}
