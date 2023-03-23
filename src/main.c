/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:40:44 by rocio             #+#    #+#             */
/*   Updated: 2023/03/21 14:03:03 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//dibuja la imagen en la ventana.
void	hook(void *parameter)
{
	t_game	*game;

	game = parameter;
	ft_insert_image_map(game);
}

//inicializar variables al empezar el juego.
//exit_game: si hay salida posible en el juego o no.
void	ft_start_var(t_game *game)
{
	game->move_counter = 0;
	game->state = STATE_START;
	game->exit_game = 0;
}

//Init devuelve mlx_t que se guarda en mlx y contiene la
//instancia de la ventana abierta, y eso se puede manipular, enganchar
//y controlar lo que sucede dentro de la ventana.
//loop_hook: elementos que deben ser actualizados en cada frame
//key_hook:detectar pulsación de una sóla tecla,
int	main(int argc, char **argv)
{
	t_game	game;
	char	*str_map;

	if (argc != 2)
		ft_print_error("Error en los parámetros introducidos\n");
	str_map = ft_read_map(argv[1]);
	ft_start_var(&game);
	ft_check_map(str_map, &game);
	game.map_2d = ft_create_map_2d(str_map);
	free(str_map);
	ft_check_map_2d(&game);
	ft_check_way(&game);
	game.screen_x = game.columns * 64;
	game.screen_y = game.rows * 64;
	game.mlx = mlx_init(game.screen_x, game.screen_y, "MLX42", 0);
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
