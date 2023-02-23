/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:02:46 by rocio             #+#    #+#             */
/*   Updated: 2023/02/17 12:25:31 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_message(t_game *game)
{
	if (game->state == STATE_VICTORY)
	{
		printf("\nCONGRATULATIONS!!!");
		printf("You completed the game in %d moves!\n", game->move_counter);
	}
	else if (game->state == STATE_CLOSED)
		printf("\nNext time, we should get these nuts!\n");
	else if (game->state == STATE_LOSED)
		printf("\nOh no! Next time, try to avoid them.\n");
}

void	ft_error_message(char *str, int error)
{
	if (!str)
	{
		printf("Error: ./so_long");
	}
	else
	{
		write(2, "Error\n", 7);
		printf("%s", str);
	}
	(void)error;
	exit(error);
}
