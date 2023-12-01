# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 18:46:17 by cefuente          #+#    #+#              #
#    Updated: 2023/11/30 10:25:39 by cefuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_numbers.c \
			ft_strings.c \
			ft_switch.c \
			ft_printf.c \
			main.c \

OBJS    =    ${SRCS:.c=.o}
OBJS	:= $(addprefix build/, $(OBJS))

HEADER    =    includes/ft_printf.h

NAME    =    a.out

CC        =    cc

FLAGS    =    -I includes

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
