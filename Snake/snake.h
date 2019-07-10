/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:28:50 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/10 15:43:59 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SNAKE_H
# define SNAKE_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "mlx/mlx.h"
# include <math.h>
# include <stdio.h>
int *mlx;
int *win;
int oy;
int ox;
int maxy;
int maxx;
typedef struct		s_list
{
	void			*mlx;
	void			*win;
	struct s_list	*next;
}					t_list;
void	grid(int height, int width);
void	square();
void	right();
void	place();
void	up();
void	down();
#endif

