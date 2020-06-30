# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 18:08:31 by pleal-ca          #+#    #+#              #
#    Updated: 2020/02/03 15:29:20 by jcarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
SRC     = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
		  ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
		  ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		  ft_isprint.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_calloc.c ft_strdup.c\
		  ft_substr.c ft_strjoin.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		  ft_putnbr_fd.c ft_itoa.c ft_strtrim.c ft_strmapi.c
BONUS	=  ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstadd_front.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS    = $(SRC:.c=.o)
OBJSB	= $(BONUS:.c=.o)
RM      = rm -f
CFLAGS  = -Wall -Werror -Wextra

$(NAME): $(OBJS) 
	gcc $(CFLAGS) $(SRC) -c
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJSB) 
	gcc $(CFLAGS) $(SRC) $(BONUS) -c
	ar rc $(NAME) $(OBJS) $(OBJSB) 
	ranlib $(NAME)
