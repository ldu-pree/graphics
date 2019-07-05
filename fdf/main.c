/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:44:01 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/05 11:56:15 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include "fdf.h"
#include <math.h>

int *mlx;
int *win;

int		addoo(int n)
{
	int y;
	int x;
	int cx;
	int cy;

	if ((int)addoo == 1)
	{
		cx = 150;
		cy = 150;
	}
	y = 50;
	x = sqrt((100*100) - ((y - cy)*(y - cy))) - cx;
	while (x >= 50 && x <= 250 && y >= 50 && y <=250)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		y++;
		x = 100 + y;
	}
	return (n);
}

int		add(int n)
{
	int x;
	int y;
	
	if (n == 1)
	{	
		y = 50;
		x = 50;
	}
	while (y <= 250 && x <= 250 && n == 1)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	x = 50;
	while (y >= 50 && x <= 250 && n == 1)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y--;
	}
	if (n == 2)
	{	
		y = 50;
		x = 350;
	}
	while (y <= 250 && x <= 550 && n == 2)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	x = 350;
	while (y >= 50 && x <= 550 && n == 2)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y--;
	}
	if (n == 3)
	{	
		y = 50;
		x = 650;
	}
	while (y <= 250 && x <= 850 && n == 3)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	x = 650;
	while (y >= 50 && x <= 850 && n == 3)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y--;
	}
	if (n == 4)
	{	
		y = 350;
		x = 50;
	}
	while (y <= 550 && y >= 350 && x <= 250 && n == 4)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	y--;
	x = 50;
	while (y >= 350 && y <= 550 && x <= 250 && n == 4)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y--;
	}
	if (n == 5)
	{	
		y = 350;
		x = 350;
	}
	while (y <= 550 && y >= 350 && x <= 550 && n == 5)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	y--;
	x = 350;
	while (y >= 350 && y <= 550 && x <= 550 && n == 5)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y--;
	}
	if (n == 6)
	{	
		y = 350;
		x = 650;
	}
	while (y <= 550 && x <= 850 && n == 6)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	y--;
	x = 650;
	while (y >= 350 && y <= 550 && x <= 850 && n == 6)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y--;
	}
	if (n == 7)
	{	
		y = 650;
		x = 50;
	}
	while (y <= 850 && x <= 250 && n == 7)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	y--;
	x = 50;
	while (y >= 650 && x <= 250 && n == 7)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y--;
	}
	if (n == 8)
	{	
		y = 650;
		x = 350;
	}
	while (y <= 850 && x <= 550 && n == 8)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	y--;
	x = 350;
	while (y >= 650 && x <= 550 && n == 8)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y--;
	}
	if (n == 9)
	{	
		y = 650;
		x = 650;
	}
	while (y <= 850 && x <= 850 && n == 9)
	{
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
		x++;
		y++;
	}
	y--;
	x = 650;
	while (y >= 650 && x <= 850 && n == 9)
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
		addoo(1);
	if (button == 1 && x < 600 && x > 300 && y < 300)
		add(2);
	if (button == 1 && x < 900 && x > 600 && y < 300)
		add(3);
	if (button == 1 && x < 300 && y > 300 && y < 600)
		add(4);
	if (button == 1 && x > 300 && x < 600 && y > 300 && y < 600)
		add(5);
	if (button == 1 && x > 600 && x < 900 && y > 300 && y < 600)
		add(6);
	if (button == 1 && x < 300 && y > 600 && y < 900)
		add(7);
	if (button == 1 && x < 600 && x > 300 && y > 600 && y < 900)
		add(8);
	if (button == 1 && x > 600 && x < 900 && y > 600 && y < 900)
		add(9);
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
