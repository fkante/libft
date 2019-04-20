# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkante <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/19 17:11:38 by fkante            #+#    #+#              #
#    Updated: 2019/04/20 17:42:48 by fkante           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
CC = gcc
AR = ar -rcs
RM = rm
CFLAGS = -Wall -Wextra -Werror
BUILD_DIR = ./build
SRC_DIRS = ./

SRCS := $(shell find $(SRC_DIRS) -name *.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $@ $(OBJS)

$(BUILD_DIR)/%.c.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BUILD_DIR)

fclean:
	$(RM) -f $(TARGET)

-include $(DEPS)

MKDIR_P ?= mkdir -p

re: fclean all
