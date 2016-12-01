* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkambuyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 10:05:34 by gkambuyl          #+#    #+#             */
/*   Updated: 2016/12/01 12:00:05 by gkambuyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int main()
{
	float x = 1028;
	float y = 512;
	float mx = 0;
	float my = 0;
	void *mlx = mlx_init();
	void *win = mlx_new_window(mlx, x, y, "Test");
	while(mx <= 50)
	{
		while (my <= 50)
		{
			mlx_pixel_put(mlx, win, mx, my, 000212255000);
			my++;
		}
		my = 0;
		mx++;
	}
	mlx_loop(mlx);
	return (0);
}
