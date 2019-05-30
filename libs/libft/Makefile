# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jterrazz <jterrazz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/12 20:58:37 by jterrazz          #+#    #+#              #
#    Updated: 2019/05/03 22:40:39 by jterrazz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_lstiter.c ft_putendl.c ft_striter.c ft_strequ.c\
	ft_lstmap.c ft_putendl_fd.c ft_striteri.c ft_strrchr.c \
	ft_atoi.c ft_lstnew.c ft_putnbr.c ft_strjoin.c ft_strsplit.c \
	ft_bzero.c ft_memalloc.c ft_putnbr_fd.c ft_strlcat.c ft_strstr.c \
	ft_isalnum.c ft_memccpy.c ft_putstr.c ft_strlen.c ft_strsub.c \
	ft_isalpha.c ft_memchr.c ft_putstr_fd.c ft_strmap.c ft_strtrim.c \
	ft_isascii.c ft_memcmp.c ft_strcat.c ft_strmapi.c ft_tolower.c \
	ft_isdigit.c ft_memcpy.c ft_strchr.c ft_strncat.c ft_toupper.c \
	ft_isprint.c ft_memdel.c ft_strclr.c ft_strncmp.c \
	ft_itoa.c ft_memmove.c ft_strcmp.c ft_strncpy.c \
	ft_lstadd.c ft_memset.c ft_strcpy.c ft_strnequ.c \
	ft_lstdel.c ft_putchar.c ft_strdel.c ft_strnew.c \
	ft_lstdelone.c ft_putchar_fd.c ft_strdup.c ft_strnstr.c

OFILES = $(FILES:.c=.o)

all : $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(FILES)
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
