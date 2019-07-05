/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:15:36 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/05 15:15:50 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	finish()
{
	if ((pos1 == 1 && pos2 == 1 && pos3 == 1) || (pos1 == 2 && pos2 == 2 && pos3 == 2))
	{
		sleep(3);
		mlx_clear_window(mlx, win);
		grid();
		reset();
	}
	if (pos1 != 0 && pos2 != 0 && pos3 != 0 && pos4 != 0 && pos5 != 2 && pos6 != 0 && pos7 != 0 && pos8 != 0 && pos9 != 0)
	{
		sleep(3);
		mlx_clear_window(mlx, win);
		grid();
		reset();
	}

}
