# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 10:30:33 by maeskhai          #+#    #+#              #
#    Updated: 2024/10/28 10:32:49 by maeskhai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	  ft_atoi.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_memmove.c ft_memchr.c \
	  ft_memcmp.c ft_strdup.c ft_strnstr.c ft_strlcat.c ft_calloc.c ft_itoa.c \
	  

build:
		@cc -Wall -Wextra -Werror ${SRC} test.c
		@./a.out
		@rm -rf ./a.out
