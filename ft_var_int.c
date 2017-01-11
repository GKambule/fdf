/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 09:41:18 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/17 11:14:26 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_var_int(t_env *env, char *str, t_points *pnt )
{
	{
		int		y;
		int		x;
		x			=	0;
		y			=	0;
		env->file 	= 	str;
		env->lib 	= 	mlx_init();
		env->win 	= 	mlx_new_window(env->lib, WIDTH, HEIGHT, env->file);

	}
}
