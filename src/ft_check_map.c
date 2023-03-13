/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:21:09 by rocio             #+#    #+#             */
/*   Updated: 2023/03/13 12:35:41 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_map(char *str_map, t_game *game)
{
	ft_validate_characters(str_map);
	ft_amount_of_characters(str_map, game);
	ft_validate_line_length(str_map);
}

void	ft_validate_characters(char *str_map)
{
	int	index;

	index = 0;
	while (str_map[index])
	{
		if (str_map[index] != '0' && str_map[index] != '1'
			&& str_map[index] != 'E' && str_map[index] != 'P'
			&& str_map[index] != 'C' && str_map[index] != '\n')
			ft_print_error("El mapa tiene al menos 1 carácter erróneo\n");
		index++;
	}
}

void	ft_amount_of_characters(char *str_map, t_game *game)
{
	int	i;
	int	p_count;
	int	collectible_count;
	int	e_count;

	i = 0;
	p_count = 0;
	collectible_count = 0;
	e_count = 0;
	while (str_map[i++])
	{
		if (str_map[i] == 'C')
			collectible_count++;
		if (str_map[i] == 'E')
			e_count++;
		if (str_map[i] == 'P')
			p_count++;
	}
	if (p_count != 1 || e_count != 1 || collectible_count < 1)
		ft_print_error("El mapa tiene al menos 1 carácter erróneo\n");
	game->collectible_count = collectible_count;
}

void	ft_validate_line_length(char *string_map)
{
	int	index;
	int	counter_first_line;
	int	counter_lines;

	index = 0;
	counter_first_line = 0;
	counter_lines = 0;
	while (string_map[index] != '\n')
	{
		counter_first_line++;
		index++;
	}
	index++;
	while (string_map[index] != '\0')
	{
		if (string_map[index] == '\n')
		{
			if (counter_lines != counter_first_line)
				ft_print_error("Este mapa no es rectangular\n");
			counter_lines = 0;
		}
		else
			counter_lines++;
		index++;
	}
}
