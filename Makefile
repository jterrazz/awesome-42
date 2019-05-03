# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/23 18:00:29 by jterrazz          #+#    #+#              #
#    Updated: 2019/05/03 22:45:19 by jterrazz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

# **************************************************************************** #
# FILES             														   #
# **************************************************************************** #

PATH_INC = inc
PATH_LIB = lib
PATH_OBJ = obj
PATH_SRC = src

# SOURCES =

SOURCES_TEST = main.c

# OBJECTS = $(SOURCES:%.c=$(PATH_OBJ)/%.o)

# **************************************************************************** #
# VARIABLES         														   #
# **************************************************************************** #

# NAME =

CC = @gcc

FLAGS_CC = -Wall -Wextra -Werror
# FLAGS_LIB = -shared -fPIC
# FLAGS_DEBUG = -g -O0

PATH_LIBFT = lib/libft/libft.a
PATH_PRINTF = lib/ft_printf/libftprintf.a

# TODO fclean messages
# **************************************************************************** #
# COMMANDS  		    													   #
# **************************************************************************** #

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): # $(OBJECTS)
	@echo "Make successful"

# $(PATH_OBJ)/%.o: $(PATH_SRC)/%.c

test:
	@make -s -C lib/ft_printf
	@echo "COMPILED: \033[33m ft_printf\033[0m"
	@make -s -C lib/libft
	@echo "COMPILED: \033[33m libft\033[0m"
	$(CC) -I $(PATH_INC) test/main.c $(PATH_LIBFT) $(PATH_PRINTF)
	@echo "Make complete"

clean:
	@make clean -C lib/ft_printf
	@make clean -C lib/libft
	@rm -rf $(PATH_OBJ)
	@echo "CLEAN: \033[33m done\033[0m"

fclean: clean
	@make fclean -C lib/ft_printf
	@make fclean -C lib/libft
	@rm -f $(NAME) $(LIB_NAME)
	@echo "FCLEAN: \033[33m done\033[0m"

re: fclean $(NAME)
