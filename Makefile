# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cefuente <cefuente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 18:46:17 by cefuente          #+#    #+#              #
#    Updated: 2023/12/01 18:38:42 by cefuente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_numbers.c \
	ft_strings.c \
	ft_switch.c \
	ft_printf.c 

OBJS    =    ${SRCS:.c=.o}

HEADER    =    includes/ft_printf.h

NAME    =    libftprintf.a

CC        =    cc

AR        =    ar -rc

FLAGS    =    -Wall -Wextra -Werror

all        :    ${NAME}

%.o        :    %.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@

${NAME}    :    ${OBJS} Makefile
	${AR} ${NAME} ${OBJS}

clean    :
	rm -f ${OBJS}

fclean    :    clean
	rm -f ${NAME}

re        :    fclean all

.PHONY    :    all clean fclean re
