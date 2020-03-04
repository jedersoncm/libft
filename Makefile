# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/04 15:28:58 by jbetti-c          #+#    #+#              #
#    Updated: 2020/02/13 12:57:55 by jbetti-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

FLAG=-Wall -Wextra -Werror

HEADER = libft.h

SRCS=ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isdigit.c ft_isalnum.c \
	 ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	 ft_strlen.c ft_strlcpy.c ft_strchr.c ft_strlcat.c ft_strrchr.c \
	 ft_strnstr.c ft_strncmp.c ft_calloc.c ft_strdup.c ft_memset.c \
	 ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	 ft_memcmp.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	 ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putendl_fd.c \
	 ft_putnbr_fd.c ft_putstr_fd.c

SRCSB=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	   ft_lstmap.c

OBJS=$(SRCS:.c=.o)

OBJSB=$(OBJS) $(SRCSB:.c=.o)

CC = gcc

CC_FLAGS = -c -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(CC) $(SRCS) libft.h $(CC_FLAGS)
	ar r $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJSB)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJSB)
	$(CC) $(SRCS) $(SRCSB) libft.h $(CC_FLAGS)
	ar r $(NAME) $(OBJSB)
