# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nakanoun <nakanoun@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/05 12:20:24 by nakanoun      #+#    #+#                  #
#    Updated: 2022/11/02 00:37:04 by nakanoun      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

AR = ar
CC = cc

FLAG = -Wall -Wextra -Werror

SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c

OBJS = ${SRC:.c=.o}

all : ${OBJS}
	
%.o : %.c
	$(CC) -c $(FLAG) $< -o $@
	
all : ${NAME}

${NAME}:	${OBJS}

	${AR} -crs ${NAME} ${OBJS}

clean: 
	rm -f ${OBJS} 

fclean:		clean
	rm -f ${NAME} a.out libft.h.gch
	
re: fclean all