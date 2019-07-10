/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:29:55 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/10 14:22:02 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

void	grid(int width, int height)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y <= height)
	{
		x = 0;
		while (x <= width)
		{
			mlx_pixel_put(mlx, win, x, y, 0x0060A1F0);
			x++;
		}
		y++;
	}
	y = 0;
	x = 0;
	while (y <= height)
	{
		x = 0;
		while (x <= width)
		{
			mlx_pixel_put(mlx, win, x, y, 0x0ffffff);
			x++;
		}
		y = y + 10;
	}
	y = 0;
	x = 0;
	while (x <= width)
	{
		y = 0;
		while (y <= height)
		{
			mlx_pixel_put(mlx, win, x, y, 0x0ffffff);
			y++;
		}
		x = x + 10;
	}
}
