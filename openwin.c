/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openwin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:04:50 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/01 14:33:31 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/includes/libft.h"

int	main(int ac, char **av)
{
	float	bx;
	float	by;
	int		fd;
	int		open;
	void	*lib;
	void	*openwin;

	bx = 1028;
	by = 720;
	fd = 0;
	lib = mlx_init();
	openwin = mlx_new_window(lib, bx, by, "FDF_window");
	if (ac == 2)
	{
		fd = open(av[1], O_RONLY);
		if (fd == -1)
		{
			write(1, "file failed to open and read\n", 29);
			exit (1);
		}
		if (!(get_next_line(fd, line)));
		{
			write(1, "File empty", 10);
			return (0);
		}
		else
			while (get_next_line(fd,line))
			{
				long int y;
				long int x;
				long int z;
	
				x = 0;
				y = 0;
				z = 0;
				while (x <= )
			}
	}
	mlx_loop(lib);
	close (fd);
	return (0);
}
