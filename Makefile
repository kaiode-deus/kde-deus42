# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kde-deus <kde-deus@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 16:01:21 by kde-deus          #+#    #+#              #
#    Updated: 2023/10/28 16:08:10 by kde-deus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_printf.c

OBJECTS = ${SOURCES:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJECTS}
	ar -rc ${NAME} ${OBJECTS}

%.o: %.c Makefile ft_printf.h
	gcc ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: re all clean fclean
