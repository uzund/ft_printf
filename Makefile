# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duzun <davut@uzun.ist>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 19:51:47 by duzun             #+#    #+#              #
#    Updated: 2022/08/30 03:41:38 by duzun            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CFLAGS		=	-Wall -Wextra -Werror -I.
CC			=	gcc
RM			=	rm -f

SRCS			=	ft_printf.c \
					ft_print_utils.c \
					ft_printxp.c	
					 
OBJS			= $(SRCS:.c=.o)

$(NAME):		$(OBJS)
				ar rc $(NAME) $(OBJS)
			
all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
