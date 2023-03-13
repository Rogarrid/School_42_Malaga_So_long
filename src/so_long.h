/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:35:25 by rocio             #+#    #+#             */
/*   Updated: 2023/03/13 12:44:09 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../MLX42/include/MLX42/MLX42.h"
# include "../libs/libft/libft.h"
# include "../libs/printf/ft_printf.h"
# include <errno.h>
# include <fcntl.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0
# define E_MALLOC "Error with malloc.\n"
# define E_ARG "Please give me one map, Mam!\n"
# define E_FILE "I cannot open the file, sorry!\n"
//# define E_CHARACTER "The map contains at least one invalid character, Mam!\n"
# define E_CHARS "The map does not contain the required characters. Meh!!\n"
//# define E_INVALIDMAP "Give me a valid map, Mam! I wanna rectangles!\n"
//# define E_WALLS "This map is not surrounded by walls! Gimme a fortress!\n"
# define E_PATH "Hey,that path is not valid !I cannot jump walls.\n"
# define E_FORMAT "Format not allowed.\n"
# define E_EMPTYFILE "Yo! Nothing to read here.\n"
# define E_IMAGE "There is something wrong with the image you want to put.\n"
//# define E_MAX "You're kind of exagerating here.\n"

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

typedef enum e_state
{
	STATE_START = 0,
	STATE_VICTORY = 1,
	STATE_CLOSED = 2,
	STATE_LOSED = 3,
}					t_state;

char				*ft_read_map(char *map);
int					ft_counter_columns(char **map_2d);
void				ft_error_message(char *str, int error);
void				ft_check_map(char *str_map, t_game *game);
void				ft_validate_characters(char *str_map);
void				ft_amount_of_characters(char *str_map, t_game *game);
void				ft_validate_line_length(char *str_map);
char				**ft_create_map_2d(char *str_map);
int					ft_counter_rows(char **map_2d);
void				ft_check_map_2d(t_game *game);
void				ft_check_way(t_game *game);
void				ft_floodfill(t_game *game, int x, int y, int *count_c);
void				ft_restore(char **map_2d);
void				ft_check_file(char *map_path);
bool				open_image(char *str);
void				ft_insert_image_map(t_game *game);
mlx_image_t			*ft_add_element(mlx_t *mlx, char *img_path);
void				ft_key_hook(mlx_key_data_t keydata, void *param);
void				hook(void *parameter);
void				ft_move_up(t_game *game);
void				ft_move_down(t_game *game);
void				ft_move_right(t_game *game);
void				ft_move_left(t_game *game);
void				ft_save_elements(t_game *game);
void				ft_free_map_2d(char **map_2d);
void				ft_clean_old_elements(t_game *game);
int					ft_check_for_c_and_e(t_game *game, char c);
void				ft_print_alert(t_game *game);
void				ft_start_var(t_game *game);
void				ft_game_won(t_game *game);
void				ft_print_error(char *string);

#endif
