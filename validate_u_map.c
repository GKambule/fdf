/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_u_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 12:02:46 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/14 13:37:34 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	validate_u_map(t_env *env)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (env->umap[i])
	{
		while (env->umap[i][j])
		{
			if (!ft_isdigit(env->umap[i][j]))
				ft_error("Invalid map format");
			j++;
		}
		j = 0;
		i++;
	}
}
