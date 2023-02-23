/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_element_management.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:26:57 by rocio             #+#    #+#             */
/*   Updated: 2023/02/17 17:29:21 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_save_elemets(t_game *game)
{
	game->elements.wall = ft_items_to_image(game->mlx,
			"./elements/Tree-wall.xpm");
	game->elements.floor = ft_items_to_image(game->mlx,
			"./elements/floor.xpm");
	game->elements.player = ft_items_to_image(game->mlx,
			"./elements/player.xpm");
	game->elements.collectible = ft_items_to_image(game->mlx,
			"./elements/potion_collect.xpm");
	if (game->collectible_count == 0)
		game->elements.exit = ft_items_to_image(game->mlx,
				"./elements/door-exit.xpm");
	else
		game->elements.exit = ft_items_to_image(game->mlx,
				"./elements/door-exit.xpm");
}

//libera la memoria asignada a los elementos usados anteriormente
void	ft_delete_old_elements(t_game *game)
{
	int	i;

	i = 0;
	mlx_delete_image(game->mlx, game->old_elements.wall);
	mlx_delete_image(game->mlx, game->old_elements.floor);
	mlx_delete_image(game->mlx, game->old_elements.player);
	mlx_delete_image(game->mlx, game->old_elements.collectible);
	mlx_delete_image(game->mlx, game->old_elements.exit);
}
