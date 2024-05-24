# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 19:11:33 by adono-ma          #+#    #+#              #
#    Updated: 2024/05/23 19:11:33 by adono-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

AR = ar rcs

SRC = 	ft_printf.c \
		libft_ft_strchr.c \
		print_char.c \
		print_putbase.c \
		print_integer.c \
		print_point.c \
		print_str.c \
		print_unsig.c \

OBJ = $(SRC:%.c=%.o)

RM = rm
RMFLAGS = -f

# Phony tells the makefile to take YOUR rules, not the defaut ones 
.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) ${OBJ}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# $< first prerequirement to create my output (in this case SRC)
# $@ -> target. is the same as to put 
# $(OBJ): $(SRC)

clean:
	$(RM) $(RMFLAGS) $(OBJ)
#it might work with %.o, check it out

fclean:	clean
	$(RM) $(RMFLAGS) $(NAME) $(OBJ)

re: fclean all

