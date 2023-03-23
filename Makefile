# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 12:15:50 by rocio             #+#    #+#              #
#    Updated: 2023/03/23 11:17:31 by rogarrid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC		= gcc

CFLAGS	=	-Wall -Werror -Wextra

LIB		= ./MLX42/libmlx42.a

RM		= rm -f

MAKE_MLX = cd ./MLX42/ && make

SRC =  ./libs/libft/ft_split.c ./libs/libft/ft_strlen.c ./libs/libft/ft_bzero.c ./libs/libft/ft_memset.c\
		./libs/printf/ft_printf.c ./libs/printf/ft_conver_base_hexa.c \
		./libs/printf/ft_filter_conver.c ./libs/printf/ft_lowercase_hex.c ./libs/printf/ft_putchar_length.c \
		./libs/printf/ft_putcharporcent_length.c ./libs/printf/ft_puthex_length.c ./libs/printf/ft_putnbr_length.c \
		./libs/printf/ft_putnbr_unsig_length.c ./libs/printf/ft_strchr_length.c ./libs/printf/ft_uppercase_hex.c \
		./src/main.c ./src/ft_read_map.c ./src/ft_check_map.c ./src/ft_error.c ./src/ft_create_map_2d.c \
		./src/ft_check_map_2d.c ./src/ft_check_way.c ./src/ft_image_map.c ./src/ft_key_hook.c ./src/ft_move_to.c \
		./src/ft_print_alert.c ./src/ft_elements.c \

OBJS = ${SRC:%.c=%.o}

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(MAKE_MLX)
	$(CC) $(OBJS) $(LIB) $(CFLAGS) -o $(NAME) -lglfw -L "/Users/$$USER/.brew/opt/glfw/lib/" -I ./MLX42/include

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all
