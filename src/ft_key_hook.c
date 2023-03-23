/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:23:31 by rocio             #+#    #+#             */
/*   Updated: 2023/03/16 17:44:14 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_key_hook(mlx_key_data_t keydata, void *paramater)
{
	t_game	*game;

	game = paramater;
	if (keydata.action == MLX_PRESS)
	{
		if (keydata.key == MLX_KEY_ESCAPE)
		{
			mlx_close_window(game->mlx);
			game->state = STATE_CLOSED;
			ft_print_alert(game);
		}
		if (game->exit_flag == 0)
		{
			if ((keydata.key == MLX_KEY_W || keydata.key == MLX_KEY_UP))
				ft_move_up(game);
			if ((keydata.key == MLX_KEY_S || keydata.key == MLX_KEY_DOWN))
				ft_move_down(game);
			if ((keydata.key == MLX_KEY_D || keydata.key == MLX_KEY_RIGHT))
				ft_move_right(game);
			if ((keydata.key == MLX_KEY_A || keydata.key == MLX_KEY_LEFT))
				ft_move_left(game);
		}
	}
}
