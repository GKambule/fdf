/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 11:05:39 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/21 11:07:40 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static char		**get_doc(const int fd)
{
	long int	rt;
	long int	cn;
	char		*buf;
	char		*doc;
	char		**holder;

	cn = 0;
	if (!(buf = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))))
		return (0);
	while ((rt = read(fd, buf, BUFF_SIZE)))
	{
		cn = cn + rt;
		buf[rt] = '\0';
		if ((rt - cn) == 0)
			doc = ft_strdup(buf);
		else
			doc = ft_strjoin(doc, buf);
	}
	holder = ft_strsplit(doc, '\n');
	free(doc);
	free(buf);
	return (holder);
}

int				get_next_line(const int fd, char **line)
{
	static char	**holder;
	static int	c = 0;
	static int	rt = 0;

	if (fd < 0)
		return (-1);
	if (c != 1)
	{
		if ((holder = get_doc(fd)) == 0)
			return (-1);
		c = 1;
	}
	if (holder[rt] != 0)
	{
		*line = holder[rt];
		rt++;
		return (1);
	}
	else if (holder[rt] == 0)
	{
		ft_strdel(holder);
		return (0);
	}
	return (-1);
}
