# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkante <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/19 17:11:38 by fkante            #+#    #+#              #
#    Updated: 2019/04/20 16:31:26 by fkante           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
CC = gcc
AR = ar -rcs
RM = rm
CFLAGS = -Wall -Wextra -Werror
BUILD_DIR = ./build
SRC_DIRS = ./src

SRCS := $(shell find $(SRC_DIRS) -name *.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP

$(BUILD_DIR)/$(TARGET): $(OBJS)
	$(AR) $@ $(OBJS)

$(BUILD_DIR)/%.c.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

all: $(TARGET)

$(TARGET):
	ar -rcs $(TARGET) $(OBJS)

clean:
	$(RM) -r $(BUILD_DIR)

fclean: clean
	$(RM) -f $(TARGET)

-include $(DEPS)

MKDIR_P ?= mkdir -p

re: fclean all
