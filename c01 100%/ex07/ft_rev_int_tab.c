/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:24:40 by edforte           #+#    #+#             */
/*   Updated: 2023/09/25 21:25:55 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	box;
	int	i;
	int	j;

	box = 0;
	i = 0;
	j = size -1;
	while (i < size / 2)
	{
		box = tab[i];
		tab[i] = tab[j];
		tab[j] = box;
		i ++;
		j --;
	}
}
