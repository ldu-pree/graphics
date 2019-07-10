/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:44:01 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/09 12:57:46 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include "fdf.h"
#include <math.h>

//int *mlx;
//int *win;
//void	 drawCircle(int xc, int yc, int x, int y) 
//{ 
//    mlx_mlx_pixel_put(mlx, win, mlx, win, xc+x, yc+y, 0x00FFFFFF); 
//    mlx_mlx_pixel_put(mlx, win, mlx, win, xc-x, yc+y, 0x00FFFFFF); 
//    mlx_mlx_pixel_put(mlx, win, mlx, win, xc+x, yc-y, 0x00FFFFFF); 
//    mlx_mlx_pixel_put(mlx, win, mlx, win, xc-x, yc-y, 0x00FFFFFF); 
//    mlx_mlx_pixel_put(mlx, win, mlx, win, xc+y, yc+x, 0x00FFFFFF); 
//    mlx_mlx_pixel_put(mlx, win, mlx, win, xc-y, yc+x, 0x00FFFFFF); 
//    mlx_mlx_pixel_put(mlx, win, mlx, win, xc+y, yc-x, 0x00FFFFFF); 
//    mlx_mlx_pixel_put(mlx, win, mlx, win, xc-y, yc-x, 0x00FFFFFF); 
//} 
//
//int		addoo(int n)
//{
//	int y;
//	int x;
//	int xc;
//	int yc;
//	int r;
//	int d;
//	r = 100;
//	  x = 0, y = r; 
//    d = 3 - 2 * r; 
//    drawCircle(xc, yc, x, y); 
//    while (y >= x) 
//    { 
//        // for each pixel we will 
//        // draw all eight pixels 
//         
//        x++; 
//  
//        // check for decision parameter 
//        // and correspondingly  
//       // update d, x, y 
//       if (d > 0) 
//        { 
//            y--;  
//            d = d + 4 * (x - y) + 10; 
//        } 
//        else
//            d = d + 4 * x + 6; 
//        drawCircle(xc, yc, x, y); 
//        sleep(50); 
//    }
//	return (0);
//}
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

int		main()
{
	int i;
	
	reset();
	mlx = mlx_init();
	win = mlx_new_window(mlx, 900, 900, "MLX 42");
	grid();
	mlx_mouse_hook(win, my_mouse_funct, 0);
	//mlx_key_hook(win, my_key_funct, 0);
	mlx_loop(mlx);
}
