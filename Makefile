# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 14:13:41 by myanez-p          #+#    #+#              #
#    Updated: 2023/03/06 12:32:24 by myanez-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_printf.c print_char.c print_number.c print_str.c print_unsigned_number.c print_hexa_number.c print_ptr.c ft_strlen.c
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
HEADERS = .

RM = rm -f

GCC = GCC

CFLAGS = -Wall -Wextra -Werror

.c.o :
		${GCC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
		ar rcs ${NAME} ${OBJS}

all : ${NAME}

p : ${OBJS}
	${GCC} ${CFLAGS} -o program ${OBJS}

clean : 
		${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

re : fclean all

.PHONY: re fclean clean all
