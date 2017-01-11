#include "../fdf.h"

int main()
{
	float x = 1028;
	float y = 512;
	float mx = 150;
	float my = 0;
	void *mlx = mlx_init();
	void *win = mlx_new_window(mlx, x, y, "Test");
	while(mx <= 150)
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
