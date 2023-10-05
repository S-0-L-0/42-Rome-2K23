/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:18:49 by edforte           #+#    #+#             */
/*   Updated: 2023/10/05 13:37:16 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int elements;
	int i;

	elements = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc (elements * 4);
	if (!(*range))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i ++;
		min ++;
	}
	return (elements);
}
