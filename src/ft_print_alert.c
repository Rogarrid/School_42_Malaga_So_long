/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:02:46 by rocio             #+#    #+#             */
/*   Updated: 2023/03/10 12:08:26 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//mensaje cuando se gana y cuando se cierra con la tecla esc
void	ft_print_alert(t_game *game)
{
	if (game->state == STATE_VICTORY)
	{
		ft_printf("\nFelicidades!!😁😁");
		ft_printf("\n¡Has completado el juego en %d movimientos!\n", game->move_counter);
	}
	else if (game->state == STATE_CLOSED)
		ft_printf("\n¡Hasta la próxima!\n");
}
