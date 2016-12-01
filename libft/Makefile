# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/28 12:22:07 by gkambuyl          #+#    #+#              #
#    Updated: 2016/11/21 09:19:36 by gkambuyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME        =   libft.a

C_FILES     =  ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c\
			   ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c\
			   ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
			   ft_memmove.c ft_memset.c ft_putchar.c\
			   ft_putstr.c ft_strcat.c ft_strchr.c ft_strcmp.c\
			   ft_strlen.c ft_strncat.c ft_strncmp.c\
			   ft_strncpy.c ft_strndup.c ft_strnstr.c\
			   ft_strrchr.c ft_strstr.c ft_strmap.c ft_strmapi.c\
			   ft_tolower.c ft_toupper.c ft_memalloc.c\
			   ft_memdel.c ft_strclr.c ft_strcpy.c ft_strdel.c\
			   ft_strdup.c ft_strequ.c ft_striter.c\
			   ft_striteri.c ft_strjoin.c ft_strlcat.c\
			   ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c\
			   ft_putnbr.c ft_putnbr_fd.c ft_putstr_fd.c\
			   ft_strnequ.c ft_strnew.c ft_strrchr.c\
			   ft_strsplit.c ft_strsub.c ft_strtrim.c

O_FILES     =   $(C_FILES:%.c=%.o)

COMPILE     =	-Wall -Wextra - Werror


all: $(NAME)

$(NAME): $(O_FILES)
		@clang $(compile) -c $(C_FILES) -I ../includes
		@ar rc $(NAME) $(O_FILES)
		@ranlib $(NAME)
		@/bin/echo "libft compilation Done"


clean:
		@/bin/rm -f $(O_FILES)
		@/bin/echo "O_files removed"

fclean: clean
		@/bin/rm -f $(NAME)
		@/bin/echo "libft Removed!"

re: fclean all
