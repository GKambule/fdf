/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_coordinates.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 11:10:08 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/17 12:21:27 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_point	ft_int_coordinates(t_env *env, t_point *pnt)
{
	int			**map;
	int			i;
	int			j;

	i = 0;
	env->umap;
	while (i < env->rows)
	{
		j = 0;
		while (j < env->colms)
		{
			pnt->x = j;
			pnt->y = i;
			pnt->z = env->umap[i][j];
			ft_draw(x, y, z);
			j++;
		}
		i++;
	}
	
}
