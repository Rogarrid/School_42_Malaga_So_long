# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 12:15:50 by rocio             #+#    #+#              #
#    Updated: 2023/03/10 12:22:43 by rogarrid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

BONUS = so_long_bonus

CC		= gcc

CFLAGS	=	-Wall -Werror -Wextra

LIB		= ./MLX42/libmlx42.a

RM		= rm -f

MAKE_MLX = cd ./MLX42/ && make

SRC = ./src/main.c ./src/ft_read_map.c ./src/ft_check_map.c ./src/ft_error.c ./src/ft_create_map_2d.c \
		./src/ft_check_map_2d.c ./libs/libft/ft_split.c ./libs/printf/ft_printf.c ./libs/printf/ft_printchar.c \
		./libs/printf/ft_printstr.c ./libs/printf/ft_printnbr.c  ./libs/printf/ft_printhex.c ./libs/printf/ft_digitlen.c \
		./libs/printf/ft_printpointer.c ./libs/printf/ft_printnbr_u.c ./libs/libft/ft_strlen.c ./src/ft_check_path.c \
		./src/ft_image_map.c ./src/ft_key_hook.c ./src/ft_move_to.c ./libs/libft/ft_bzero.c \
		./src/ft_print_alert.c ./src/ft_elements.c

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
