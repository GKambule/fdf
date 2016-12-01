# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 10:20:35 by gkambuyl          #+#    #+#              #
#    Updated: 2016/11/24 12:03:49 by gkambuyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fdf

C_FILES		=	test/test.c

O_FILES		=	$(C_FILES:%.c=%.o)

COMP		=	-Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(O_FILES)
	@clang $(COMP) $(C_FILES) -o$(NAME)
	@/bin/echo "Compilation Complete!"

clean:
	@/bin/rm -f $(O_FILES)
	@/bin/echo "O_Files Removed!"

fclean:	clean
	@/bin/rm -f $(NAME)
	@/bin/echo "fdf Removed!"

re: fclean all
