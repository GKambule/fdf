/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 09:55:40 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/15 13:26:15 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	readfile(char *str, t_env *env)
{
	int	fd;
	int i;
	char *line;

	i = 0;
	line = NULL;
	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_error("Failed to open and read file");
		exit (0);
	}
	else if (fd > 0)
		rmap(env, fd, line);
	else
	{
		if ((ft_get_next_line(fd, &line) < 0))
		{
			ft_error("Invalid file");
			exit (0);
		}
	}
	close(fd)
}
