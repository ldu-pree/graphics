/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:11:31 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/09 12:08:07 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		addo(int n, int colour)
{
	int x;
	int y;

	if (n == 1)
	{	
		draw_circle(150, 150, 100, 0x00FFFFFF);
		draw_circle(150, 150, 99, 0x000000FF);
		draw_circle(150, 150, 101, 0x000000FF);
	}
	if (n == 2)
	{	
		draw_circle(450, 150, 100, 0x00FFFFFF);
		draw_circle(450, 150, 99, 0x000000FF);
		draw_circle(450, 150, 101, 0x000000FF);
	}
	if (n == 3)
	{
		draw_circle(750, 150, 100, 0x00FFFFFF);
		draw_circle(750, 150, 99, 0x000000FF);
		draw_circle(750, 150, 101, 0x000000FF);
	}

	if (n == 4)
	{
		draw_circle(150, 450, 100, 0x00FFFFFF);
		draw_circle(150, 450, 99, 0x000000FF);
		draw_circle(150, 450, 101, 0x000000FF);
	}
	if (n == 5)
	{	
		draw_circle(450, 450, 100, 0x00FFFFFF);
		draw_circle(450, 450, 99, 0x000000FF);
		draw_circle(450, 450, 101, 0x000000FF);
	}
	if (n == 6)
	{
		draw_circle(750, 450, 100, 0x00FFFFFF);
		draw_circle(750, 450, 99, 0x000000FF);
		draw_circle(750, 450, 101, 0x000000FF);
	}
	if (n == 7)
	{
		draw_circle(150, 750, 100, 0x00FFFFFF);
		draw_circle(150, 750, 99, 0x000000FF);
		draw_circle(150, 750, 101, 0x000000FF);
	}
	if (n == 8)
	{	
		draw_circle(450, 750, 100, 0x00FFFFFF);
		draw_circle(450, 750, 99, 0x000000FF);
		draw_circle(450, 750, 101, 0x000000FF);
	}
	if (n == 9)
	{	
		draw_circle(750, 750, 100, 0x00FFFFFF);
		draw_circle(750, 750, 99, 0x000000FF);
		draw_circle(750, 750, 101, 0x000000FF);
	}
	return (1);
}
