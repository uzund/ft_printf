# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makafile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duzun <davut@uzun.ist>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 19:51:47 by duzun             #+#    #+#              #
#    Updated: 2022/08/25 22:25:25 by duzun            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
CFLAGS		=	-Wall -Wextra -Werror
CC			=	gcc
RM			=	rm -f

SRCS			=	ft_printf.c \
					ft_print_utils.c
					 
OBJS			= $(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
