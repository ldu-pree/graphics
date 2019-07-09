/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:15:36 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/09 11:44:10 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	finish()
{
	int x;
	int y;
	x = 49;
	y = 151;
	//Horizontal checks
	if ((pos1 == 1 && pos2 == 1 && pos3 == 1) || (pos1 == 2 && pos2 == 2 && pos3 == 2))
	{
		while (++x <= 850)
			mlx_pixel_put(mlx, win, x, y, 0x00FF0000);
		let = 3;
		if (pos1 == 1)
			printf("X Player Wins The Game :D");
		if (pos1 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos4 == 1 && pos5 == 1 && pos6 == 1) || (pos4 == 2 && pos5 == 2 && pos6 == 2))
	{
		x = 49;
		y = 451;
		while (++x <= 850)
			mlx_pixel_put(mlx, win, x, y, 0x00FF0000);
		let = 3;
		if (pos4 == 1)
			printf("X Player Wins The Game :D");
		if (pos4 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos7 == 1 && pos8 == 1 && pos9 == 1) || (pos7 == 2 && pos8 == 2 && pos9 == 2))
	{
		x = 49;
		y = 751;
		while (++x <= 850)
			mlx_pixel_put(mlx, win, x, y, 0x0FF0000);
		let = 3;
		if (pos7 == 1)
			printf("X Player Wins The Game :D");
		if (pos7 == 2)
			printf("O Player Wins The Game :D");
	}
	//vertical checks
	if ((pos1 == 1 && pos4 == 1 && pos7 == 1) || (pos1 == 2 && pos4 == 2 && pos7 == 2))
	{
		x = 151;
		y = 49;
		while (++y <= 850)
			mlx_pixel_put(mlx, win, x, y, 0x00FF0000);
		let = 3;
		if (pos1 == 1)
			printf("X Player Wins The Game :D");
		if (pos1 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos2 == 1 && pos5 == 1 && pos8 == 1) || (pos2 == 2 && pos5 == 2 && pos8 == 2))
	{
		x = 451;
		y = 49;
		while (++y <= 850)
			mlx_pixel_put(mlx, win, x, y, 0x00FF0000);
		let = 3;
		if (pos2 == 1)
			printf("X Player Wins The Game :D");
		if (pos2 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos3 == 1 && pos6 == 1 && pos9 == 1) || (pos3 == 2 && pos6 == 2 && pos9 == 2))
	{
		x = 751;
		y = 49;
		while (++y <= 850)
			mlx_pixel_put(mlx, win, x, y, 0x00FF0000);
		let = 3;
		if (pos3 == 1)
			printf("X Player Wins The Game :D");
		if (pos3 == 2)
			printf("O Player Wins The Game :D");
	}
	//diagonal checks
	if ((pos1 == 1 && pos5 == 1 && pos9 == 1) || (pos1 == 2 && pos5 == 2 && pos9 == 2))
	{
		x = 49;
		y = 49;
		while (++x <= 850 && ++y <= 850)
			mlx_pixel_put(mlx, win, x, y, 0x00FF0000);
		let = 3;
		if (pos1 == 1)
			printf("X Player Wins The Game :D");
		if (pos1 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos7 == 1 && pos5 == 1 && pos3 == 1) || (pos7 == 2 && pos5 == 2 && pos3 == 2))
	{
		x = 851;
		y = 49;
		while (--x >= 50 && ++y <= 850)
			mlx_pixel_put(mlx, win, x, y, 0x00FF0000);
		let = 3;
		if (pos7 == 1)
			printf("X Player Wins The Game :D");
		if (pos7 == 2)
			printf("O Player Wins The Game :D");
	}
	//if there is no winner check
	if (pos1 != 0 && pos2 != 0 && pos3 != 0 && pos4 != 0 && pos5 != 2 && pos6 != 0 && pos7 != 0 && pos8 != 0 && pos9 != 0)
	{
		let = 3;
		printf("Nobody Wins UwU");
	}

}
