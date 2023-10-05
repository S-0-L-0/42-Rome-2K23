/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 08:31:43 by edforte           #+#    #+#             */
/*   Updated: 2023/10/04 11:45:41 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	elements;
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	elements = max - min;
	ptr = (int *)malloc(elements * 4);
	while (min < max)
	{
		ptr[i] = min;
		i ++;
		min ++;
	}
	return (ptr);
}
