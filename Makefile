#***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 13:06:31 by mamottet          #+#    #+#              #
#    Updated: 2023/08/20 09:14:55 by mamottet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -- Commande -- #

RM	= rm -f
CC	= cc
FL	= -Wall -Werror -Wextra
COMP	= $(CC) $(FL)

# -- SRC -- #

SRC =	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strtrim.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_substr.c \
	ft_split.c \
	ft_tolower.c \
	ft_toupper.c \
	printf/ft_numbers.c \
	printf/ft_printf.c \
	printf/ft_words.c \
	gnl/get_next_line.c \
	gnl/get_next_line_utils.c


SRCO	= $(SRC:.c=.o)

NAME	= lib.a

# -- Target -- #

all:			$(NAME)

$(NAME):		$(SRCO)
				ar rcs $(NAME) $(SRCO)

clean:
				$(RM) $(SRCO)

fclean:			clean	
			$(RM) $(NAME)

re:			fclean all

test:
		@norminette
		@$(CC) $(FL) $(SRC)
		@make all
		@$(COMP) -L. libft.a main.c -o prog
