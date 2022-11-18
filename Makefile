# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samartin <samartin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 15:15:33 by samartin          #+#    #+#              #
#    Updated: 2022/11/18 10:53:30 by samartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= gcc
SRCS	= *.c
OBJS	= ${SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf
LFTDIR  = libft
LIBFT	= libft.a

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS}
	make -C ${LFTDIR}
	ar -crs ${NAME} ${OBJS} ${LFTDIR}/${LIBFT}

clean:
	cd ${LFTDIR} ; make clean
	${RM} ${OBJS}

fclean: clean
	cd ${LFTDIR} ; make fclean
	${RM} ${NAME}

re: fclean all