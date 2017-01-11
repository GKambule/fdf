/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 10:38:52 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/13 12:01:50 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_file_error(char *file)
{
	perror(file);
	exit (0);
}

void	ft_mcheck(char *file, t_env *pnt)
{
	char	*line;
	char	**map;
	int		fd;
	int		i;
	int		s;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_file_error(file);
	}
	s = 0;
	while (ft_get_next_line(fd, &line))
		s++;
	pnt->rows = s;
	close(fd);
	map = (char **)malloc(sizeof(*map) * (s + 1));
	fd = open(file, O_RDONLY);
	i = 0;
	while (ft_get_next_line(&line))
	{
		map[i] = line;
		i++;
	}
	map[i] = '\0';
	close(fd);
	return (map);
}
