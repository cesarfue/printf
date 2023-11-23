# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 18:46:17 by cefuente          #+#    #+#              #
#    Updated: 2023/11/23 12:23:56 by cefuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_intlen.c \
			ft_pf_putchar.c \
			ft_pf_putnbr.c \
			ft_pf_putptr.c \
			ft_pf_putptrhigh.c \
			ft_pf_putptrlow.c \
			ft_pf_putstr.c \
			ft_printf.c \
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
