/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:21:09 by rocio             #+#    #+#             */
/*   Updated: 2023/03/10 12:19:50 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_map(char *str_map, t_game *game)
{
	ft_validate_characters(str_map);
	ft_amount_of_characters(str_map, game);
	ft_validate_length(str_map);
	ft_validate_line_length(str_map);
}

void	ft_validate_characters(char *str_map)
{
	int	i;

	i = 0;
	while (str_map[i])
	{
		if (str_map[i] != '0' && str_map[i] != '1' && str_map[i] != 'E'
			&& str_map[i] != 'P' && str_map[i] != 'C' && str_map[i] != '\n')
			ft_error_message(E_CHARACTER, 1);
		i++;
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
		ft_error_message(E_CHARS, 1);
	game->collectible_count = collectible_count;
}

void	ft_validate_length(char *str_map)
{
	int	i;
	int	count_first_line;

	i = 0;
	count_first_line = 0;
	while (str_map[i] != '\n')
	{
		count_first_line++;
		i++;
	}
	if (count_first_line >= 128)
		ft_error_message(E_MAX, 1);
}

void	ft_validate_line_length(char *str_map)
{
	int	i;
	int	count_first_line;
	int	count_other_lines;

	i = 0;
	count_first_line = 0;
	count_other_lines = 0;
	while (str_map[i] != '\n')
	{
		count_first_line++;
		i++;
	}
	i++;
	while (str_map[i] != '\0')
	{
		if (str_map[i] == '\n')
		{
			if (count_other_lines != count_first_line)
				ft_error_message(E_INVALIDMAP, 1);
			count_other_lines = 0;
		}
		else
			count_other_lines++;
		i++;
	}
}
