/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:11:31 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/05 14:14:33 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		addo(int n, int colour)
{
	int x;
	int y;

	if (n == 1)
	{	
		y = 50;
		while (y <= 250)
		{
			x = 50;
			while (x <= 250)
			{
				mlx_pixel_put(mlx, win, x, y, colour);
				x++;
			}
			y++;
		}
	}
	if (n == 2)
	{	
		y = 50;
		while (y <= 250)
		{
			x = 350;
			while (x <= 550)
			{
				mlx_pixel_put(mlx, win, x, y, colour);
				x++;
			}
			y++;
		}
	}

	if (n == 3)
	{	
		y = 50;
		while (y <= 250)
		{
			x = 650;
			while (x <= 850)
			{
				mlx_pixel_put(mlx, win, x, y, colour);
				x++;
			}
			y++;
		}
	}

	if (n == 4)
	{	
		y = 350;
		while (y <= 550)
		{
			x = 50;
			while (x <= 250)
			{
				mlx_pixel_put(mlx, win, x, y, colour);
				x++;
			}
			y++;
		}
	}

	if (n == 5)
	{	
		y = 350;
		while (y <= 550)
		{
			x = 350;
			while (x <= 550)
			{
				mlx_pixel_put(mlx, win, x, y, colour);
				x++;
			}
			y++;
		}
	}

	if (n == 6)
	{	
		y = 350;
		while (y <= 550)
		{
			x = 650;
			while (x <= 850)
			{
				mlx_pixel_put(mlx, win, x, y, colour);
				x++;
			}
			y++;
		}
	}

	if (n == 7)
	{	
		y = 650;
		while (y <= 850)
		{
			x = 50;
			while (x <= 250)
			{
				mlx_pixel_put(mlx, win, x, y, colour);
				x++;
			}
			y++;
		}
	}

	if (n == 8)
	{	
		y = 650;
		while (y <= 850)
		{
			x = 350;
			while (x <= 550)
			{
				mlx_pixel_put(mlx, win, x, y, colour);
				x++;
			}
			y++;
		}
	}

	if (n == 9)
	{	
		y = 650;
		while (y <= 850)
		{
			x = 650;
			while (x <= 850)
			{
				mlx_pixel_put(mlx, win, x, y, colour);
				x++;
			}
			y++;
		}
	}

	return (1);
}
