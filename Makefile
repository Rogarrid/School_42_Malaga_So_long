# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rocio <rocio@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 11:45:27 by rocio             #+#    #+#              #
#    Updated: 2023/01/26 12:01:48 by rocio            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	so_long

CC		=	gcc
CFLAGSS	=	-Wall -Werror -Wextra
LIB		=	./MLX42/libmlx42.a
RM		=	rm -f
MAKE_MLX = cd ./MLX42/ && make

SRC	=	./gameCode/main.c	\
		./gameCode/ft_read_check.c	\
		./aux/libft/ft_strlen.c	\
		./aux/printf/ft_conver_base_hexa.c	\
		./aux/printf/ft_filter_conver.c	\
		./aux/printf/ft_lowercase_hex.c	\
		./aux/printf/ft_printf.c	\
		./aux/printf/ft_putchar_length.c	\
		./aux/printf/ft_putcharporcent_length.c	\
		./aux/printf/ft_puthex_length.c	\
		./aux/printf/ft_putnbr_length.c	\
		./aux/printf/ft_putnbr_unsig_length.c	\
		./aux/printf/ft_strchr_length.c	\
		./aux/printf/ft_uppercase_hex.c	\

OBJS	=	$(SOURCES:%.c=%.o)

all	:	$(NAME)

$(NAME)	: $(OBJS)
	$(MAKE_MLX)
	$(CC) $(OBJS) $(LIB) $(CFLAGS) -o $(NAME) -lglfw -L "/Users/$$USER/.brew/opt/glfw/lib/" -I ./MLX42/include

clean	:
	$(RM) $(OBJS) $(OBJS_B)

fclean	: clean
	$(RM) $(NAME) $(BONUS)

re	: fclean all

.PHONY:	all clean fclean re
