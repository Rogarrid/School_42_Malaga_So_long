/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:40:44 by rocio             #+#    #+#             */
/*   Updated: 2023/03/10 12:06:34 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//percibir pulsaciones
void	hook(void *parameter)
{
	t_game	*game;

	game = parameter;
	ft_insert_image_map(game);
}

//inicializar variables al empezar el juego.
void	ft_start_var(t_game *game)
{
	game->move_counter = 0;
	game->state = STATE_START;
	game->exit_game = 0;
}

//mlx guarda mlx_t que devuelve el init, es una estructura que contiene la
//instancia de la ventana bierta, y eso se puede manipular, enganchar y controlar
//lo que sucede dentro de la ventana.
//key_hook:detectar pulsación de una sóla tecla,
//loop_hook: elementos que deben ser actualizados en cada frame
int	main(int argc, char **argv)
{
	t_game	game;
	char	*str_map;

	if (argc != 2)
		ft_error_message(E_ARG, 1);
	str_map = ft_read_map(argv[1]);
	ft_start_var(&game);
	ft_check_map(str_map, &game);
	game.map_2d = ft_create_map_2d(str_map);
	free(str_map);
	ft_check_map_2d(&game);
	ft_check_path(&game);
	game.screen_x = game.columns * 64;
	game.screen_y = game.rows * 64;
	game.mlx = mlx_init(game.screen_x, game.screen_y, "MLX42", FALSE);
	if (!game.mlx)
		exit(EXIT_FAILURE);
	ft_save_elements(&game);
	mlx_loop_hook(game.mlx, &hook, &game);
	mlx_key_hook(game.mlx, &ft_key_hook, &game);
	mlx_loop(game.mlx);
	ft_free_map_2d(game.map_2d);
	mlx_terminate(game.mlx);
	return (EXIT_SUCCESS);
}
