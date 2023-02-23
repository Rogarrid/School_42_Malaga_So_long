/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:40:44 by rocio             #+#    #+#             */
/*   Updated: 2023/02/16 10:23:55 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//inicializar variables

void	ft_start_var(t_game *game)
{
	game->move_counter = 0;
	game->state = STATE_START;
	game->exit = 0;
}

//Abre el archivo y chequea tamaño mapa, si es un rectangulo
int	ft_check_size_map(char *string)
{
	int	file_descriptor;
	int	check_width;

	file_descriptor = open(string, O_RDONLY);
	if (file_descriptor == -1)
		printf("Error apertura_3\n");
	else
		check_width = ft_check_width(file_descriptor);
	close(file_descriptor);
	return (check_width);
}

//Chequear: formato de archivo y composición mapa
int	ft_check_format_element(char *string)
{
	int	file_descriptor;
	int	check_element;
	int	check_width;

	if (ft_check_format_file(string) != 4)
	{
		printf("error formato .ber \n");
		return (0);
	}
	else
	{
		file_descriptor = open(string, O_RDONLY);
		if (file_descriptor == -1)
			printf("Error apertura_2\n");
		else
			check_element = ft_check_elements_map(file_descriptor);
	}
	close(file_descriptor);
	check_width = ft_check_size_map(string);
	if (check_width == 1 && check_element == 1)
		return (1);
	return (0);
}

//abre el archivo y valida que el mapa tenga el formato pedido y su composición
int	ft_validate_map(char *string, t_game *game)
{
	int	format_element;
	int	elements;

	format_element = ft_check_format_element(string);
	if (format_element == 1)
		elements = ft_open_map_check_elements(string, game);
	else
		return (format_element);
	if (elements == 0)
		printf("Error P, E o C\n");
	return (elements);
}

//Primero ve formato .ber, elementos mapa y tamaño mapa.
//crea array 2d, chequea mapa rodeado por muro, guarda mapa en estructura.
int	main(int argc, char **argv)
{
	t_game	game;
	int		check_map;
	char	*map;

	if (argc == 2)
	{
		check_map = ft_validate_map(argv[1], &game);
		if (check_map != 0)
		{
			map = ft_read_map(argv[1]);
			ft_start_var(&game);
			game.map_2d = ft_string_to_2d(map);
			free(map);
			if (ft_validate_wall(game.map_2d) != 1)
				printf("Mapa sin muro completo\n");
		}
	}
	else
		write(1, "error argumento\n", 16);
	return (0);
}
