/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:45:33 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/10 16:14:30 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.h"

void	up()
{
	int i;
	int j;

	i = 0;
	j = -10;
	oy = oy - 10;
	while (i <= 10)
	{
		j = -10;
		while (j <= 0)
		{
			mlx_pixel_put(mlx, win, ox - i + 10, oy - j, 0x00000000);
		j++;
		}
		i++;
	}
	//oy = oy - j + 1;
}