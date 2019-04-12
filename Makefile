# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asantiag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/10 16:43:56 by ctammi            #+#    #+#              #
#    Updated: 2019/04/11 23:54:30 by asantiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./*.c

OBJECT = *.o

OPTIONS = -c -I ./includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) $(OPTIONS)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
			rm -f $(OBJECT)

fclean: clean 
			rm -f $(NAME)

re: fclean all
