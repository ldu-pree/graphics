/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:44:06 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/10 16:53:59 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paint.h"

void	place()
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= pix)
	{
		j = 0;
		while (j <= pix)
		{
			mlx_pixel_put(mlx, win, ox + i, oy + j, 0x00000000);
			j++;
		}
		i++;
	}
	//ox = ox + i - 1;
}