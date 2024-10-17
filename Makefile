# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfranco <jfranco@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 12:58:20 by jfranco           #+#    #+#              #
#    Updated: 2024/10/17 13:07:52 by jfranco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c \
      ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c \
      ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c \
      ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c \
	  ft_substr.c ft_strjoin.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
