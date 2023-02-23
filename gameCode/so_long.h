/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:35:25 by rocio             #+#    #+#             */
/*   Updated: 2023/02/13 13:41:26 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> //borrar todos los printf y esta liberia
# include <fcntl.h> //open, read, etc
# include "../MLX42/include/MLX42/MLX42.h"
//# include "../aux/libft/libft.h"
# include "../aux/printf/ft_printf.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_elements //assests
{
	mlx_image_t		*wall; //bush
	mlx_image_t		*player; //sqirrel
	mlx_image_t		*collectible;//acorn
	mlx_image_t		*wall_inside_map; //tree
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
