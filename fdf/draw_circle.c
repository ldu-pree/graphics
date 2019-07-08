/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 18:05:31 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/08 18:10:17 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void 	circlePoints(int cx, int cy, int x, int y)
    { 
        if (x == 0) {
            mlx_pixel_put(mlx, win, cx, cy + y, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx, cy - y, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx + y, cy, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx - y, cy, 0x00FFFFFF);
        } else 
        if (x == y) {
            mlx_pixel_put(mlx, win, cx + x, cy + y, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx - x, cy + y, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx + x, cy - y, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx - x, cy - y, 0x00FFFFFF);
        } else 
        if (x < y) {
            mlx_pixel_put(mlx, win, cx + x, cy + y, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx - x, cy + y, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx + x, cy - y, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx - x, cy - y, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx + y, cy + x, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx - y, cy + x, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx + y, cy - x, 0x00FFFFFF);
            mlx_pixel_put(mlx, win, cx - y, cy - x, 0x00FFFFFF);
        }
    }

void 	draw_circle(int xCenter, int yCenter, int radius)
    {
        int x = 0;
        int y = radius;
        int p = (5 - radius*4)/4;

        circlePoints(xCenter, yCenter, x, y);
        while (x < y) {
            x++;
            if (p < 0) {
                p += 2*x+1;
            } else {
                y--;
                p += 2*(x-y)+1;
            }
            circlePoints(xCenter, yCenter, x, y);
        }
    }
