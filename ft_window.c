/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_window.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 11:10:45 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/11/24 10:18:37 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(void)
{
	t_win		*e;
	int			x;
	int			y;

	x = 0;
	y = 0;
	e->x = 500;
	e->y = 500;
	
	e->ptr = mlx_init();

	mlx_new_window(e->ptr, e->x, e->y, "Hello World");
	mlx_loop(e->ptr);;
	return (0);
}
