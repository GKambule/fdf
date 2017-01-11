/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openwin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:04:50 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/13 09:40:35 by gkambuyl         ###   ########.fr       */
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
	int		draw;
	float	dx;
	float	dy;

	bx = 1028;
	by = 720;
	fd = 0;
	draw = 0;
	dx = 0;
	dy = 0;
	lib = mlx_init();
	if (ac == 2)
	{
		openwin = mlx_new_window(lib, bx, by, "FDF_window");
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "file failed to open and read\n", 29);
			exit (1);
		}
		if (!(get_next_line(fd, &line)));
		{
			write(1, "File empty", 10);
			return (0);
		}
		else
			while ((get_next_line(fd, &line)) > 0)
			{
				worldmap = ft_get-number(line);
				i++;
				while (x <= )
				{
					while (y <= ){
						mlx_pixel_put(lib, openwin, dx, dy, 000212255000);
					}

				}
			}
	}
	mlx_loop(lib);
	close (fd);
	return (0);
}
