# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 12:54:41 by lfrank            #+#    #+#              #
#    Updated: 2023/02/23 13:53:23 by rogarrid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

BONUS = so_long_bonus

CC		= gcc

CFLAGS	=	-Wall -Werror -Wextra

LIB		= ./MLX42/libmlx42.a

RM		= rm -f

MAKE_MLX = cd ./MLX42/ && make

SRC = ./src/ft_check_map_1.c ./src/ft_check_map_2.c ./src/ft_check_path.c ./src/ft_create_map.c ./src/ft_element_management.c \
	 ./src/ft_hook.c ./src/ft_image_map.c ./src/ft_move_to.c ./src/ft_print_alert.c ./src/main.c \
	 ./libs/printf/ft_printf.c ./libs/printf/ft_printchar.c ./libs/printf/ft_printstr.c ./libs/printf/ft_printnbr.c \
	 ./libs/printf/ft_printhex.c ./libs/printf/ft_digitlen.c ./libs/printf/ft_printpointer.c ./libs/printf/ft_printnbr_u.c ./libs/libft/ft_strlen.c\
	 ./libs/libft/ft_bzero.c ./libs/libft/ft_split.c \
	 ./libs/get_next_line/get_next_line.c ./libs/libft/ft_calloc.c ./libs/libft/ft_strjoin.c ./libs/libft/ft_strchr.c  \
	 ./libs/libft/ft_memset.c ./libs/libft/ft_strlen_width.c \

OBJS = ${SRC:%.c=%.o}

OBJS_B = ${SRC_B:%.c=%.o}

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(MAKE_MLX)
	$(CC) $(OBJS) $(LIB) $(CFLAGS) -o $(NAME) -lglfw -L "/Users/$$USER/.brew/opt/glfw/lib/" -I ./MLX42/include

$(BONUS) : $(OBJS_B)
	$(MAKE_MLX)
	$(CC) $(OBJS_B) $(LIB) $(CFLAGS) -o $(BONUS) -lglfw -L "/Users/$$USER/.brew/opt/glfw/lib/" -I ./MLX42/include

clean	:
	$(RM) $(OBJS) $(OBJS_B)

fclean	: clean
	$(RM) $(NAME) $(BONUS)

bonus	: $(BONUS)

re		: fclean all
