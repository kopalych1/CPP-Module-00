# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akostian <akostian@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 14:47:56 by akostian          #+#    #+#              #
#    Updated: 2025/02/10 15:23:54 by akostian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME				= megaphone

# VPATH				= src

SRC_DIR				= .
SRCS				= megaphone.cpp

# INC_DIR				= include
# INCLUDES			= -I$(INC_DIR)

BUILD_DIR			= build
OBJS				= $(addprefix $(BUILD_DIR)/, $(SRCS:%.cpp=%.o))

CC					= c++
CFLAGS				= -Wall -Wextra -Werror -g3 -std=c++98

NORMINETTE			= norminette
NORMINETTE_FLAGS	= --use-gitignore

RM					= rm -rf



all: $(NAME)
#


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
#


$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)
#


$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
#


run: all
	./$(NAME)
#


vrun: all
	valgrind ./$(NAME)
#


clean:
	$(RM) $(BUILD_DIR)
#


fclean:
	$(RM) $(BUILD_DIR) $(NAME)
#


re: fclean all
#



.PHONY: all clean fclean re