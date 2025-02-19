# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akostian <akostian@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 14:47:56 by akostian          #+#    #+#              #
#    Updated: 2025/02/19 04:10:28 by akostian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME				= account

# VPATH				= src

SRC_DIR				= .
SRCS				= Account.cpp \
					  tests.cpp

INC_DIR				= .
INCLUDES			= -I$(INC_DIR)

BUILD_DIR			= build
LOG_DIR				= logs
OBJS				= $(addprefix $(BUILD_DIR)/, $(SRCS:%.cpp=%.o))

CC					= c++
CFLAGS				= -g3 -std=c++98

NORMINETTE			= norminette
NORMINETTE_FLAGS	= --use-gitignore

RM					= rm -rf

LOG1				= $(LOG_DIR)/"19920104_091532.log"
LOG2				= $(LOG_DIR)/"output.log"



all: $(NAME)
#


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
#


$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)
#

$(LOG_DIR):
	mkdir -p $(LOG_DIR)
#


$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
#


run: all | $(LOG_DIR)
	@./$(NAME) > $(LOG_DIR)/output.log
	./$(NAME)
#


test: all | $(LOG_DIR)
	./$(NAME) > $(LOG_DIR)/output.log

	@cut -b17- $(LOG1) > $(LOG_DIR)/filtered_expected.log
	@cut -b17- $(LOG2) > $(LOG_DIR)/filtered_output.log

	diff $(LOG_DIR)/filtered_expected.log $(LOG_DIR)/filtered_output.log

	@$(RM) $(LOG_DIR)/filtered_expected.log $(LOG_DIR)/filtered_output.log
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