/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_element_management.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:26:57 by rocio             #+#    #+#             */
/*   Updated: 2023/02/24 13:45:24 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_save_elemets(t_game *game)
{
	game->elements.wall = ft_items_to_image(game->mlx,
			"./elements/Tree-wall.xpm42");
	game->elements.floor = ft_items_to_image(game->mlx,
			"./elements/floor.xpm42");
	game->elements.player = ft_items_to_image(game->mlx,
			"./elements/perso.xpm42");
	game->elements.collectible = ft_items_to_image(game->mlx,
			"./elements/potion-collect.xpm42");
	if (game->collectible_count == 0)
		game->elements.exit = ft_items_to_image(game->mlx,
				"./elements/door-exit.xpm42");
	else
		game->elements.exit = ft_items_to_image(game->mlx,
				"./elements/door-exit.xpm42");
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
