# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:46:46 by msimoes           #+#    #+#              #
#    Updated: 2025/04/10 19:19:42 by msimoes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INC_DIR = includes
SRCS = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlen.c \
		ft_tolower.c ft_toupper.c 
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
	