/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:15:36 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/05 15:59:22 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void mlxclear(){}


void	finish()
{
	//Horizontal checks
	if ((pos1 == 1 && pos2 == 1 && pos3 == 1) || (pos1 == 2 && pos2 == 2 && pos3 == 2))
	{
		sleep(3);
		mlx_destroy_window(mlx, win);
		mlxclear();
		grid();
		reset();
		if (pos1 == 1)
			printf("X Player Wins The Game :D");
		if (pos1 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos4 == 1 && pos5 == 1 && pos6 == 1) || (pos4 == 2 && pos5 == 2 && pos6 == 2))
	{
		mlx_destroy_window(mlx, win);
		mlxclear();
		grid();
		reset();
		if (pos4 == 1)
			printf("X Player Wins The Game :D");
		if (pos4 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos7 == 1 && pos8 == 1 && pos9 == 1) || (pos7 == 2 && pos8 == 2 && pos9 == 2))
	{
		mlx_destroy_window(mlx, win);
		mlxclear();
		grid();
		reset();
		if (pos7 == 1)
			printf("X Player Wins The Game :D");
		if (pos7 == 2)
			printf("O Player Wins The Game :D");
	}
	//vertical checks
	if ((pos1 == 1 && pos4 == 1 && pos7 == 1) || (pos1 == 2 && pos4 == 2 && pos7 == 2))
	{
		mlx_destroy_window(mlx, win);
		mlxclear();
		grid();
		reset();
		if (pos1 == 1)
			printf("X Player Wins The Game :D");
		if (pos1 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos2 == 1 && pos5 == 1 && pos8 == 1) || (pos2 == 2 && pos5 == 2 && pos8 == 2))
	{
		mlx_destroy_window(mlx, win);
		mlxclear();
		grid();
		reset();
		if (pos2 == 1)
			printf("X Player Wins The Game :D");
		if (pos2 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos3 == 1 && pos6 == 1 && pos9 == 1) || (pos3 == 2 && pos6 == 2 && pos9 == 2))
	{
		mlx_destroy_window(mlx, win);
		mlxclear();
		grid();
		reset();
		if (pos3 == 1)
			printf("X Player Wins The Game :D");
		if (pos3 == 2)
			printf("O Player Wins The Game :D");
	}
	//diagonal checks
	if ((pos1 == 1 && pos5 == 1 && pos9 == 1) || (pos1 == 2 && pos5 == 2 && pos9 == 2))
	{
		mlx_destroy_window(mlx, win);
		mlxclear();
		grid();
		reset();
		if (pos1 == 1)
			printf("X Player Wins The Game :D");
		if (pos1 == 2)
			printf("O Player Wins The Game :D");
	}
	if ((pos7 == 1 && pos5 == 1 && pos3 == 1) || (pos7 == 2 && pos5 == 2 && pos3 == 2))
	{
		sleep(3);
		mlx_clear_window(mlx, win);
		grid();
		reset();
		if (pos7 == 1)
			printf("X Player Wins The Game :D");
		if (pos7 == 2)
			printf("O Player Wins The Game :D");
	}
	//if there is no winner check
	if (pos1 != 0 && pos2 != 0 && pos3 != 0 && pos4 != 0 && pos5 != 2 && pos6 != 0 && pos7 != 0 && pos8 != 0 && pos9 != 0)
	{
		mlx_destroy_window(mlx, win);
		mlxclear();
		grid();
		reset();
		printf("Nobody Wins UwU");
	}

}
