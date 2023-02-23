/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:23:31 by rocio             #+#    #+#             */
/*   Updated: 2023/02/17 12:17:42 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	hook(void *param)
{
	t_game	*game;

	game = param;
	ft_insert_image_map(game);
}

void	ft_key_hook(mlx_key_data_t keydata, void *param)
{
	t_game	*game;

	game = param;
	if (keydata.action == MLX_PRESS)
	{
		if (keydata.key == MLX_KEY_ESCAPE)
		{
			mlx_close_window(game->mlx);
			game->state = STATE_CLOSED;
			ft_print_message(game);
		}
		if (game->exit == FALSE)
		{
			if ((keydata.key == MLX_KEY_W || keydata.key == MLX_KEY_UP))
				ft_move_to_up(game);
			if ((keydata.key == MLX_KEY_A || keydata.key == MLX_KEY_LEFT))
				ft_move_to_left(game);
			if ((keydata.key == MLX_KEY_S || keydata.key == MLX_KEY_DOWN))
				ft_move_to_down(game);
			if ((keydata.key == MLX_KEY_D || keydata.key == MLX_KEY_RIGHT))
				ft_move_to_right(game);
		}
	}
}
