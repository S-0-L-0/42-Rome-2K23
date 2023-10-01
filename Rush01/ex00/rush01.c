/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:40:05 by edforte           #+#    #+#             */
/*   Updated: 2023/09/30 16:07:05 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	matrix(int *ptr)
{
	int col;
	int row;
	int mx[row][col];

	col = 4;
	row = 4;
	int i =0;
	int j=0;

	while (i < 4)
	{
		while (j < 4)
		{
			mx[i][j] = 0;
			printf("%d", mx[i][j]);
			j ++;
		}
		printf("\n");
		j = 0;
		i ++;
	}
}

int main(void)
{
	int ptr[2];
	matrix(ptr);
	return (0);
}
