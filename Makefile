# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scopycat <scopycat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 20:34:36 by scopycat          #+#    #+#              #
#    Updated: 2020/11/04 13:50:18 by scopycat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra

NAME = libasm.a

SRC = ft_strlen.s
# ft_read.s\
# ft_strcmp.s\
# ft_strcpy.s\
# ft_strdup.s\
# ft_strlen.s\
# ft_write.s

NASM = nasm -fmacho64

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.s
	$(NASM) $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) libasm

re: fclean all

test: re
	rm -f libasm
	gcc $(FLAG) -L. -lasm main.c -o libasm
	./libasm

