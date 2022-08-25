# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: duzun <davut@uzun.ist>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 19:51:47 by duzun             #+#    #+#              #
#    Updated: 2022/08/26 00:09:43 by duzun            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

CFLAGS		=	-Wall -Wextra -Werror -I.
CC			=	gcc
RM			=	rm -f

SRCS			=	ft_printf.c \
					ft_print_utils.c
					 
OBJS			= $(SRCS:.c=.o)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS)
				ar rc $(NAME) $(OBJS)

#%.o: %.c
#	$(CC) $(CFLAGS) -c $<  -o $@
			
all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
