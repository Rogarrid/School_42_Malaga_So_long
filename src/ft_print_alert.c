/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:02:46 by rocio             #+#    #+#             */
/*   Updated: 2023/03/16 17:44:41 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//mensaje cuando se gana y cuando se cierra con la tecla esc
void	ft_print_alert(t_game *game)
{
	if (game->state == STATE_VICTORY)
	{
		ft_printf("\nFelicidades!!😁😁");
		ft_printf("\n¡Finalizaste en %d movimientos!\n", game->move_counter);
	}
	else if (game->state == STATE_CLOSED)
		ft_printf("\n¡Hasta la próxima!\n");
}
