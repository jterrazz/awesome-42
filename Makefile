# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/23 18:00:29 by jterrazz          #+#    #+#              #
#    Updated: 2019/05/04 23:19:21 by jterrazz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# FILES             														   #
# **************************************************************************** #

# TODO Add this makefile changes to general git

PATH_INC = inc
PATH_LIB = lib
PATH_OBJ = obj
PATH_SRC = src

SOURCES = src/*.c src/*/*.c # TODO Replace

OBJECTS = $(SOURCES:%.c=$(PATH_OBJ)/%.o)

# **************************************************************************** #
# VARIABLES         														   #
# **************************************************************************** #

NAME = ft_ssl

CC = @gcc

FLAGS_CC = #-Wall -Wextra -Werror

PATH_LIBFT = lib/libft/libft.a
PATH_PRINTF = lib/ft_printf/libftprintf.a

# TODO fclean messages
# **************************************************************************** #
# COMMANDS  		    													   #
# **************************************************************************** #

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): # $(OBJECTS)
	@make -s -C lib/ft_printf
	@echo "Make ft_printf \033[33mok\033[0m"
	@make -s -C lib/libft
	@echo "Make libft \033[33mok\033[0m"
	$(CC) $(FLAGS_CC) -I inc $(PATH_LIBFT) $(PATH_PRINTF) $(SOURCES)
	@echo "Compilation successful"

# $(PATH_OBJ)/%.o: $(PATH_SRC)/%.c

clean:
	@make clean -C lib/ft_printf
	@make clean -C lib/libft
	@rm -rf $(PATH_OBJ)
	@echo "Clean \033[33mok\033[0m"

fclean: clean
	@make fclean -C lib/ft_printf
	@make fclean -C lib/libft
	@rm -f $(NAME) $(LIB_NAME)
	@echo "Fclean \033[33mok\033[0m"

re: fclean $(NAME)
