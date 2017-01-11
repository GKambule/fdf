# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 10:20:35 by gkambuyl          #+#    #+#              #
#    Updated: 2016/12/16 13:06:50 by gkambuyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fdf

C_FILES		=	readfile.c ft_rmap.c main.c validate_u_map.c ft_var_int.c\
				ft_error.c 

O_FILES		=	$(C_FILES:%.c=%.o)

COMP		=	-Wall -Wextra -Werror -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME): $(O_FILES)
	@make -C libft/ fclean
	@make -C libft/
	@clang $(COMP) -I libft/includes/ -c $(C_FILES) -o$(NAME)
	@/bin/echo "Compilation Complete!"

clean:
	@/bin/rm -f $(O_FILES)
	@/bin/echo "O_Files Removed!"

fclean:	clean
	@/bin/rm -f $(NAME)
	@/bin/echo "fdf Removed!"

re: fclean all
