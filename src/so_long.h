/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:35:25 by rocio             #+#    #+#             */
/*   Updated: 2023/03/23 10:23:37 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdlib.h>
# include "../libs/libft/libft.h"
# include "../libs/printf/ft_printf.h"
# include "../MLX42/include/MLX42/MLX42.h"

typedef enum e_state
{
	STATE_START = 0,
	STATE_VICTORY = 1,
	STATE_CLOSED = 2,
	STATE_LOSED = 3,
}					t_state;

typedef struct s_elements
{
	mlx_image_t		*wall;
	mlx_image_t		*player;
	mlx_image_t		*collectible;
	mlx_image_t		*exit;
	mlx_image_t		*floor;
}					t_elements;

typedef struct s_game
{
	mlx_t			*mlx;
	char			**map_2d;
	int				rows;
	int				columns;
	t_elements		items;
	t_elements		old_elements;
	mlx_t			*window;
	int				move_counter;
	int				m_flag;
	int				c_flag;
	int				collectible_count;
	int				state;
	int				exit_flag;
	int				screen_x;
	int				screen_y;
	int				exit_game;
}					t_game;

char				*ft_read_map(char *map);
int					ft_counter_collectible(char **map_2d);
void				ft_check_map(char *str_map, t_game *game);
void				ft_validate_characters(char *str_map);
void				ft_amount_of_characters(char *str_map, t_game *game);
void				ft_validate_line_length(char *str_map);
char				**ft_create_map_2d(char *str_map);
int					ft_counter_rows(char **map_2d);
void				ft_check_map_2d(t_game *game);
void				ft_check_way(t_game *game);
void				ft_save_coll(t_game *game, int colum, int row, int *c_coll);
void				ft_restore_value(char **map_2d);
void				ft_check_format_file(char *map_path);
int					ft_open_image(char *string);
void				ft_insert_image_map(t_game *game);
mlx_image_t			*ft_add_element(mlx_t *mlx, char *image_path);
void				ft_image_to_window(t_game *game, int x, int y);
void				ft_key_hook(mlx_key_data_t keydata, void *paramater);
void				hook(void *parameter);
void				ft_move_up(t_game *game);
void				ft_move_down(t_game *game);
void				ft_move_right(t_game *game);
void				ft_move_left(t_game *game);
void				ft_save_elements(t_game *game);
void				ft_free_map_2d(char **map_2d);
void				ft_clean_old_elements(t_game *game);
int					ft_check_collec_exit(t_game *game, char character);
void				ft_print_alert(t_game *game);
void				ft_start_var(t_game *game);
void				ft_winner(t_game *game);
void				ft_print_error(char *string);
int					main(int argc, char **argv);

#endif
