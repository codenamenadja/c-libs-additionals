# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihhan <jihhan@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/12 19:53:43 by jihhan            #+#    #+#              #
#    Updated: 2021/05/13 15:30:20 by junehan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#REQUIRED TARGETS: $(NAME) all clean fclean
# Header
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -Iincludes
.DEFAULT_GOAL		:= all
NAME				= ft_additionals.a

SOURCES				= $(wildcard srcs/*.c)
OBJECTS				= $(patsubst %.c,%.o,$(SOURCES))

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)
	ranlib $@

.PHONY: clean
clean:
	@/bin/rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
	@/bin/rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY: test
test:
	$(CC) $(CFLAGS) tests/test_strstr.c $(NAME) -o $@.out
	./$@.out
	rm $@.out
