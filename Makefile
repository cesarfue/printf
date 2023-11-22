# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cesar <cesar@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 18:46:17 by cefuente          #+#    #+#              #
#    Updated: 2023/11/22 14:30:01 by cesar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_intlen.c \
			ft_printf.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_strlen.c \
			main.c

OBJS    =    ${SRCS:.c=.o}
OBJS	:= $(addprefix build/, $(OBJS))

HEADER    =    includes/ft_printf.h

NAME    =    a.out

CC        =    cc

FLAGS    =    -Wall -Wextra -Werror -I includes

all        :    ${NAME}

build/%.o        :    %.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@

${NAME}    :    ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean    :
	rm -f build/*.o

fclean    :    clean
	rm -f ${NAME}

re        :    fclean all

.PHONY    :    all clean fclean re bonus
