/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:03:09 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/09 12:04:12 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "mlx/mlx.h"
# include <math.h>
# include <stdio.h>
int *win;
int *mlx;
int let;
int pos1;
int pos2;
int pos3;
int pos4;
int pos5;
int pos6;
int pos7;
int pos8;
int pos9;
typedef struct		s_list
{
	void			*mlx;
	void			*win;
	struct s_list	*next;
}					t_list;
int		addx(int n, int colour);
int		addo(int n, int colour);
int		addob(int n);
int		my_mouse_funct(int button, int x, int y, void *param);
void	reset();
void	grid();
void	finish();
void	draw_circle(int xCenter, int yCenter, int radius, int color);
int		game_end();
#endif
