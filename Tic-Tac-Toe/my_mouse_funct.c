/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mouse_funct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:11:50 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/09 12:20:59 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		my_mouse_funct(int button, int x, int y, void *param)
{
	//1 shoot
	//2 aim
	//3 knif
	//pos1
	if (button == 1 && x < 300 && y < 300 && pos1 == 0)
	{
		if (let == 1)
		{
			addx(1, 0x00f1c40f);
			let = 0;
			pos1 = 1;
		}
		else if (let != 3)
		{
			addo(1, 0x00FFFFFF);
			let = 1;
			pos1 = 2;
		}
	}
	//pos2
	if (button == 1 && x < 600 && x > 300 && y < 300 && pos2 == 0)
	{
		if (let == 1)
		{
			addx(2, 0x00f1c40f);
			let = 0;
			pos2 = 1;
		}
		else if (let != 3)
		{
			addo(2, 0x00FFFFFF);
			let = 1;
			pos2 = 2;
		}
	}
	//pos3
	if (button == 1 && x < 900 && x > 600 && y < 300 && pos3 == 0)
	{
		if (let == 1)
		{
			addx(3, 0x00f1c40f);
			let = 0;
			pos3 = 1;
		}
		else if (let != 3)
		{
			addo(3, 0x00FFFFFF);
			let = 1;
			pos3 = 2;
		}
	}
	//pos4
	if (button == 1 && x < 300 && y > 300 && y < 600 && pos4 == 0)
	{
		if (let == 1)
		{
			addx(4, 0x00f1c40f);
			let = 0;
			pos4 = 1;
		}
		else if (let != 3)
		{
			addo(4, 0x00FFFFFF);
			let = 1;
			pos4 = 2;
		}
	}
	//pos5
	if (button == 1 && x > 300 && x < 600 && y > 300 && y < 600 && pos5 == 0)
	{
		if (let == 1)
		{
			addx(5, 0x00f1c40f);
			let = 0;
			pos5 = 1;
		}
		else if (let != 3)
		{
			addo(5, 0x00FFFFFF);
			let = 1;
			pos5 = 2;
		}
	}
	//pos6
	if (button == 1 && x > 600 && x < 900 && y > 300 && y < 600 && pos6 == 0)
	{
		if (let == 1)
		{
			addx(6, 0x00f1c40f);
			let = 0;
			pos6 = 1;
		}
		else if (let != 3)
		{
			addo(6, 0x00FFFFFF);
			let = 1;
			pos6 = 2;
		}
	}
	//pos7
	if (button == 1 && x < 300 && y > 600 && y < 900 && pos7 == 0)
	{
		if (let == 1)
		{
			addx(7, 0x00f1c40f);
			let = 0;
			pos7 = 1;
		}
		else if (let != 3)
		{
			addo(7, 0x00FFFFFF);
			let = 1;
			pos7 = 2;
		}
	}
	//pos8
	if (button == 1 && x < 600 && x > 300 && y > 600 && y < 900 && pos8 == 0)
	{
		if (let == 1)
		{
			addx(8, 0x00f1c40f);
			let = 0;
			pos8 = 1;
		}
		else if (let != 3)
		{
			addo(8, 0x00FFFFFF);
			let = 1;
			pos8 = 2;
		}
	}
	//pos9
	if (button == 1 && x > 600 && x < 900 && y > 600 && y < 900 && pos9 == 0)
	{
		if (let == 1)
		{
			addx(9, 0x00f1c40f);
			let = 0;
			pos9 = 1;
		}
		else if (let != 3)
		{
			addo(9, 0x00FFFFFF);
			let = 1;
			pos9 = 2;
		}
	}
	if ((pos1 != 0 && pos2 != 0 && pos3 != 0 && pos4 != 0 && pos5 != 0 && pos6 != 0 && pos7 != 0 && pos8 != 0 && pos9 != 0) || (pos7 == 1 && pos5 == 1 && pos3 == 1) || (pos7 == 2 && pos5 == 2 && pos3 == 2) || (pos1 == 1 && pos5 == 1 && pos9 == 1) || (pos1 == 2 && pos5 == 2 && pos9 == 2) || (pos3 == 1 && pos6 == 1 && pos9 == 1) || (pos3 == 2 && pos6 == 2 && pos9 == 2) || (pos2 == 1 && pos5 == 1 && pos8 == 1) || (pos2 == 2 && pos5 == 2 && pos8 == 2) || (pos1 == 1 && pos4 == 1 && pos7 == 1) || (pos1 == 2 && pos4 == 2 && pos7 == 2) || (pos7 == 1 && pos8 == 1 && pos9 == 1) || (pos7 == 2 && pos8 == 2 && pos9 == 2) || (pos4 == 1 && pos5 == 1 && pos6 == 1) || (pos4 == 2 && pos5 == 2 && pos6 == 2) || (pos1 == 1 && pos2 == 1 && pos3 == 1) || (pos1 == 2 && pos2 == 2 && pos3 == 2))
	{
		printf("Click the middle mouse button to start a new game");
		if (button == 3)
			game_end();
	}
	finish();
	return (0);
}
