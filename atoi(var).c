/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 08:59:20 by edforte           #+#    #+#             */
/*   Updated: 2023/09/24 09:29:19 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
				{
					result = result * 10 + (str[i] - '0');
				}
		i ++;
	}
	else
	{
		write(2,"L'input inserito non è valido, si prega di riprovare", 52);
		return 1;	
	}
}
