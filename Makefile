# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkante <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/19 17:11:38 by fkante            #+#    #+#              #
#    Updated: 2019/04/21 14:50:38 by fkante           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
AR = ar -rcs
RM = rm
CFLAGS = -Wall -Wextra -Werror
BUILD_DIR = ./build
MKDIR_P ?= mkdir -p

SRCS := $(shell find *.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(BUILD_DIR)/%.c.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) -c $< -o $@

clean:
	$(RM) -rf $(BUILD_DIR)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all
