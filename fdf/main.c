/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:44:01 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/04 18:17:39 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include "fdf.h"

int *mlx;
int *win;

int		add(int n)
{
	int x;
	int y;
	
	y = 50;
	x = 50;
	while (y <= 250 && x <= 250)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	x = 50;
	while (y >= 50 && x <= 250)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y--;
	}
	return (n);
}

int		my_key_funct(int keycode, void *param)
{
	int x;
	int y;
	
	y = 50;
	while (y <= 150)
	{
		x = 50;
		while (x <= 150)
		{
			mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
			x++;
		}
		y++;
	}
	printf("key event %d\n", keycode);
	return (0);
}

int		my_mouse_funct(int button, int x, int y, void *param)
{
	//1 shoot
	//2 aim
	//3 knife
	if (button == 1 && x < 300 && y < 300)
	{
		add(0);
	}
	return (0);
}

int		main()
{
	int i;

	i = 0;
	mlx = mlx_init();
	win = mlx_new_window(mlx, 900, 900, "MLX 42");
	while (i <= 900)
	{
		mlx_pixel_put(mlx, win, i, 300, 0x00FFFFFF);
		mlx_pixel_put(mlx, win, i, 600, 0x00FFFFFF);
		i++;
	}
	i = 0;
	while (i <= 900)
	{
		mlx_pixel_put(mlx, win, 600, i, 0x00FFFFFF);
		mlx_pixel_put(mlx, win, 300, i, 0x00FFFFFF);
		i++;
	}
	mlx_mouse_hook(win, my_mouse_funct, 0);
	//mlx_key_hook(win, my_key_funct, 0);
	mlx_loop(mlx);
}
