/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:16:12 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/05 15:16:23 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	grid()
{
	int i;

	i = 0;
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
}
