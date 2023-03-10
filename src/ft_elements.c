/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:26:57 by rocio             #+#    #+#             */
/*   Updated: 2023/03/10 12:18:24 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_save_elements(t_game *game)
{
	game->elements.wall = ft_elements_to_image(game->mlx, "./elements/Tree-wall.xpm42");
	game->elements.floor = ft_elements_to_image(game->mlx, "./elements/floor.xpm42");
	game->elements.player = ft_elements_to_image(game->mlx, "./elements/player2.xpm42");
	game->elements.collectible = ft_elements_to_image(game->mlx, "./elements/potion-collect.xpm42");
	if (game->collectible_count == 0)
		game->elements.exit = ft_elements_to_image(game->mlx, "./elements/door-exit.xpm42");
	else
		game->elements.exit = ft_elements_to_image(game->mlx, "./elements/door-exit.xpm42");
}

/* frees the memory allocated to previously used elements */
void	ft_clean_old_elements(t_game *game)
{
	int	i;

	i = 0;
	mlx_delete_image(game->mlx, game->old_elements.wall);
	mlx_delete_image(game->mlx, game->old_elements.floor);
	mlx_delete_image(game->mlx, game->old_elements.player);
	mlx_delete_image(game->mlx, game->old_elements.collectible);
	mlx_delete_image(game->mlx, game->old_elements.exit);
}
