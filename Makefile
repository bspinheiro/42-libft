# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 10:03:04 by bda-silv          #+#    #+#              #
#*   Updated: 2022/05/23 14:02:11 by                  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# TODO: BONUS

NAME	=	libft.a

SRCS	=	$(wildcard *.c)

OBJS	=	$(SRCS:.c=.o)

CC 		=	cc
CFLAGS 	=	-Wall -Wextra -Werror

RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)
clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
