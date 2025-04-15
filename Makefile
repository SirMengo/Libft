# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:46:46 by msimoes           #+#    #+#              #
#    Updated: 2025/04/15 15:07:57 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =  ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memset.c ft_strchr.c ft_strrchr.c \
		ft_strdup.c ft_strlen.c ft_tolower.c ft_toupper.c \
		ft_bzero.c ft_calloc.c ft_memcpy.c ft_memchr.c \
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
		ft_memcmp.c ft_strnstr.c ft_substr.c ft_strjoin.c 
COMP_LIB = ar rcs
RM = rm -f
CC = cc
CC_FLAGS = -c -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
ADD = $(SRCS)

all: $(NAME)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(OBJS):
	$(CC) $(CC_FLAGS) $(ADD) 

$(NAME): $(OBJS)
	$(COMP_LIB) $(NAME) $(OBJS)
	