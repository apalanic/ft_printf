#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apalanic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/25 11:03:28 by apalanic          #+#    #+#              #
#    Updated: 2016/11/25 11:07:05 by apalanic         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a
SRC =	calc_size.c \
			check.c \
			color_manager.c \
			ft_atoi.c \
			ft_printf.c \
			ft_putchar.c \
			ft_strncmp.c \
			ft_memcpy.c \
			ft_memset.c \
			print_bonus.c \
			print_char.c \
			print_decimal.c \
			print_hex.c \
			print_octal.c \
			print_pointer.c \
			print_string.c \
			print_unsigned.c \
			struct.c \

SRCDIR = ./srcs/
OBJDIR = ./obj/
OBJ = $(addprefix $(OBJDIR),$(SRC:.c=.o))
FLAGS = -Wall -Wextra -Werror

all: obj $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o:$(SRCDIR)%.c
	gcc $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(OBJDIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
