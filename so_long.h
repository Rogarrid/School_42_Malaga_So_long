/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:35:25 by rocio             #+#    #+#             */
/*   Updated: 2023/02/17 12:24:53 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "MLX42/include/MLX42/MLX42.h"
# include <memory.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> //borrar todos los printf y esta liberia
# include <fcntl.h> //open, read, etc
//# include "../aux/libft/libft.h"

# define BUFFER_SIZE 42
# define TRUE 1
# define FALSE 0
# define E_MALLOC "Error with malloc.\n"
# define E_ARG "Please give me one map, Mam!\n"
# define E_FILE "I cannot open the file, sorry!\n"
# define E_CHARACTER "The map contains at least one invalid character, Mam!\n"
# define E_CHARS "The map does not contain the required characters. Meh!!\n"
# define E_INVALIDMAP "Give me a valid map, Mam! I wanna rectangles!\n"
# define E_WALLS "This map is not surrounded by walls! Gimme a fortress!\n"
# define E_PATH "Hey,that path is not valid !I cannot jump walls.\n"
# define E_FORMAT "Format not allowed.\n"
# define E_EMPTYFILE "Yo! Nothing to read here.\n"
# define E_IMAGE "There is something wrong with the image you want to put.\n"
# define E_MAX "You're kind of exagerating here.\n"

typedef struct s_elements //assests
{
	mlx_image_t		*wall; //bush
	mlx_image_t		*player; //sqirrel
	mlx_image_t		*collectible;//acorn
	mlx_image_t		*exit; //tree
	mlx_image_t		*floor;
}					t_elements; //assests

typedef struct s_game
{
	mlx_t			*mlx;
	char			**map_2d;
	int				rows;
	int				columns;
	t_elements		elements;
	t_elements		old_elements;
	mlx_t			*window;
	int				move_counter;
	int				m_flag;
	int				c_flag;
	int				collectible_count;//c_count
	int				state;
	int				exit_flag; //era un booleano BORRAR ESTE MENSAJE
	int				screen_x;
	int				screen_y;
	int				exit; //exit_flag, era un booleano BORRAR ESTE MENSAJE
}					t_game;

typedef enum e_state
{
	STATE_START = 0,//NULL
	STATE_VICTORY = 1,//Success
	STATE_CLOSED = 2,//closing
	STATE_LOSED = 3,//GAMEOVER
}					t_state;

typedef enum e_id
{
	ID_FLOOR = 0,
	ID_PLAYER = 1, //P_E
	ID_COLLECTIBLE = 2, //ACORN
	ID_WALL = 3, //bush
	ID_EXIT = 4, //tree
}					t_id;

int					main(int argc, char **argv);
void				ft_start_var(t_game *game);
int					ft_validate_map(char *string, t_game *game);
int					ft_check_number_elements(int file_descriptor, t_game *game);
int					ft_open_map_check_elements(char *string, t_game *game);
int					ft_check_format_file(char *string);
int					ft_check_elements_map(int file_descriptor);
int					ft_check_char(char character);
int					ft_check_width(int file_descriptor);
size_t				ft_strlen_width(char *string);
char				**ft_string_to_2d(char *str_map);
char				*ft_read_map(char *map_path);
int					ft_validate_wall(char **map_2d);
int					ft_max_row(char	**map_2d);

//nuevas para abrir mapa

int					open_image(char *string);
mlx_image_t			*ft_items_to_image(mlx_t *mlx, char *img_path);
void				ft_see_image_window(t_game *game, int y, int x);
void				ft_insert_image_map(t_game *game);
void				ft_win_game(t_game *game);
void				ft_save_elemets(t_game *game);
void				ft_delete_old_elements(t_game *game);
void				hook(void *param);
void				ft_key_hook(mlx_key_data_t keydata, void *param);
void				ft_move_to_up(t_game *game);
void				ft_move_to_left(t_game *game);
void				ft_move_to_right(t_game *game);
void				ft_move_to_down(t_game *game);
int					ft_check_collec_exit(t_game *game, char elements);
void				ft_free_map_2d(char **map_2d);
int					ft_count_c(char **map_2d);
void				ft_floodfill(t_game *game, int x, int y, int *count_c);
void				ft_restore(char **map_2d);
void				ft_validate_path(t_game *game);
int					ft_max_row_total(char	**map_2d);
void				ft_print_message(t_game *game);
void				ft_error_message(char *str, int error);

//auxiliares
size_t				ft_strlen(char *string);
char				*get_next_line(int file_descriptor);
char				*ft_print_line(char *save_line);
char				*ft_clean_save(char *save_line);
char				*ft_read_save_next_line(int fd, char *save_line);
char				*ft_strjoin(char *str_1, char *str_2);
char				*ft_strchr(char *string, int character);
void				*ft_calloc(size_t number_items, size_t size);
void				ft_bzero(void *directation_memory, size_t number_bytes);
void				*ft_memset(void *string, int character, size_t number_bytes);

//AUXILIARES PASAR A MI LIBFT !! //
static void			ft_free_all(char **str_tab, int index);
static int			ft_count_str(char const *string, char character);
static char			*ft_set_one_substr(int *start, char const *str, char cha);
static char			**ft_set_substr(char const *str, char cha, char **str_tab);
char				**ft_split(char const *str, char character);

#endif
