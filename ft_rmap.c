/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 09:29:36 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/17 11:43:29 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	rmap(t_env *env, int fd, char *line)
{
	int		i;
	char	*buf;
	char	**table;

	i = 0;
	while (get_next_line(fd, &line))
	{
		if (i == 0)
			buf = ft_strjoin(line, "\n");
		else
			buf = ft_strjoin(buf, ft_strjoin(line, "\n"));
		i++;
	}
	env->umap = (int **)malloc(sizeof(int *) * i);
	env->rows = i;
	table = ft_strsplit(buf, '\n');
	env = ft_get_number(table, env);
	free(buf);
	ft_strdel(table);
	validate_u_map(env);
}
