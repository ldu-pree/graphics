/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 18:05:31 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/09 12:04:42 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void 	circlePoints(int cx, int cy, int x, int y, int color)
    { 
        if (x == 0) {
            mlx_pixel_put(mlx, win, cx, cy + y, color);
            mlx_pixel_put(mlx, win, cx, cy - y, color);
            mlx_pixel_put(mlx, win, cx + y, cy, color);
            mlx_pixel_put(mlx, win, cx - y, cy, color);
        } else 
        if (x == y) {
            mlx_pixel_put(mlx, win, cx + x, cy + y, color);
            mlx_pixel_put(mlx, win, cx - x, cy + y, color);
            mlx_pixel_put(mlx, win, cx + x, cy - y, color);
            mlx_pixel_put(mlx, win, cx - x, cy - y, color);
        } else 
        if (x < y) {
            mlx_pixel_put(mlx, win, cx + x, cy + y, color);
            mlx_pixel_put(mlx, win, cx - x, cy + y, color);
            mlx_pixel_put(mlx, win, cx + x, cy - y, color);
            mlx_pixel_put(mlx, win, cx - x, cy - y, color);
            mlx_pixel_put(mlx, win, cx + y, cy + x, color);
            mlx_pixel_put(mlx, win, cx - y, cy + x, color);
            mlx_pixel_put(mlx, win, cx + y, cy - x, color);
            mlx_pixel_put(mlx, win, cx - y, cy - x, color);
        }
    }

void 	draw_circle(int xCenter, int yCenter, int radius, int color)
    {
        int x = 0;
        int y = radius;
        int p = (5 - radius*4)/4;

        circlePoints(xCenter, yCenter, x, y, color);
        while (x < y) {
            x++;
            if (p < 0) {
                p += 2*x+1;
            } else {
                y--;
                p += 2*(x-y)+1;
            }
            circlePoints(xCenter, yCenter, x, y, color);
        }
    }
