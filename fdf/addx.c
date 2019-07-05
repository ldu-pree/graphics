/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:18:43 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/05 14:13:02 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		addx(int n, int colour)
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
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y++;
	}
	x = 50;
	while (y >= 50 && x <= 250 && n == 1)
	{
		mlx_pixel_put(mlx, win, x, y, colour);
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
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y++;
	}
	x = 350;
	while (y >= 50 && x <= 550 && n == 2)
	{
		mlx_pixel_put(mlx, win, x, y, colour);
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
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y++;
	}
	x = 650;
	while (y >= 50 && x <= 850 && n == 3)
	{
		mlx_pixel_put(mlx, win, x, y, colour);
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
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y++;
	}
	y--;
	x = 50;
	while (y >= 350 && y <= 550 && x <= 250 && n == 4)
	{
		mlx_pixel_put(mlx, win, x, y, colour);
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
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y++;
	}
	y--;
	x = 350;
	while (y >= 350 && y <= 550 && x <= 550 && n == 5)
	{
		mlx_pixel_put(mlx, win, x, y, colour);
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
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y++;
	}
	y--;
	x = 650;
	while (y >= 350 && y <= 550 && x <= 850 && n == 6)
	{
		mlx_pixel_put(mlx, win, x, y, colour);
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
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y++;
	}
	y--;
	x = 50;
	while (y >= 650 && x <= 250 && n == 7)
	{
		mlx_pixel_put(mlx, win, x, y, colour);
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
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y++;
	}
	y--;
	x = 350;
	while (y >= 650 && x <= 550 && n == 8)
	{
		mlx_pixel_put(mlx, win, x, y, colour);
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
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y++;
	}
	y--;
	x = 650;
	while (y >= 650 && x <= 850 && n == 9)
	{
		mlx_pixel_put(mlx, win, x, y, colour);
		x++;
		y--;
	}
	return (n);
}
