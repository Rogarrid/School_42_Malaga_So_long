/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:26:57 by rocio             #+#    #+#             */
/*   Updated: 2023/03/13 11:23:48 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_save_elements(t_game *game)
{
	game->items.wall = ft_add_element(game->mlx, "./items/wall.xpm42");
	game->items.floor = ft_add_element(game->mlx, "./items/floor.xpm42");
	game->items.player = ft_add_element(game->mlx, "./items/front.xpm42");
	game->items.collectible = ft_add_element(game->mlx, "./items/coll.xpm42");
	if (game->collectible_count == 0)
		game->items.exit = ft_add_element(game->mlx, "./items/ex-op.xpm42");
	else
		game->items.exit = ft_add_element(game->mlx, "./items/ex-clos.xpm42");
}

/* frees the memory allocated to previously used elements */
void	ft_clean_old_elements(t_game *game)
{
	mlx_delete_image(game->mlx, game->old_elements.wall);
	mlx_delete_image(game->mlx, game->old_elements.floor);
	mlx_delete_image(game->mlx, game->old_elements.player);
	mlx_delete_image(game->mlx, game->old_elements.collectible);
	mlx_delete_image(game->mlx, game->old_elements.exit);
}
