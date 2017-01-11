/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:48:08 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/17 11:46:48 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FDF_H
# define FDF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <mlx.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft/includes/libft.h"
# define WIDTH 1000
# define HIEGHT 1000
# define DEG30 0.52398776
# define DEG15 0.261799388

typedef struct	s_point
{
	float		z;
	float		x;
	float		y;
}				t_point;

typedef struct	s_env
{
	void		*win;
	void		*lib;
	char		*file;
	int			**umap;
	t_point		**map2;
	t_point		**map3;
	int			colms;
	int			rows;
	float		spas;
	float		zmax;
	float		zmin;
	int			colour;
	t_point		eye;
	int			view_type;
}				t_env;

t_env		*ft_get_number(char **table, t_env *env);
void		ft_error(void);
void		readfile(char *str, t_env *env);
void		rmap(t_env *env, int fd, char *line);
void		validate_u_map(t_env *env);
#endif
