/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:11:31 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/08 18:23:38 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		addo(int n, int colour)
{
	int x;
	int y;

	if (n == 1)
	{	
		draw_circle(150, 150, 100);
	}
	if (n == 2)
	{	
		draw_circle(450, 150, 100);
	}
	if (n == 3)
	{	
		draw_circle(750, 150, 100);
	}

	if (n == 4)
	{	
		draw_circle(150, 450, 100);
	}

	if (n == 5)
	{	
		draw_circle(450, 450, 100);
	}

	if (n == 6)
	{	
		draw_circle(750, 450, 100);
	}

	if (n == 7)
	{	
		draw_circle(150, 750, 100);
	}

	if (n == 8)
	{	
		draw_circle(450, 750, 100);
	}

	if (n == 9)
	{	
		draw_circle(750, 750, 100);		
	}
	return (1);
}
