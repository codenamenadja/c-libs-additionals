# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihhan <jihhan@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/12 19:53:43 by jihhan            #+#    #+#              #
#    Updated: 2020/06/23 17:45:55 by jihhan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#REQUIRED TARGETS: $(NAME) all clean fclean
# Header
CFLAGS				= -Wall -Werror -Wextra -I. -c
.DEFAULT_GOAL		:= all
NAME				= additionals.a

SOURCES				= $(wildcard srcs/ft_*.c)
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
