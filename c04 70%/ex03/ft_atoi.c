/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:42:31 by edforte           #+#    #+#             */
/*   Updated: 2023/10/02 17:54:47 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || \
			str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || \
			str[i] == '\b')
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = (sign * -1);
		i ++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i ++;
	}
	return (sign * result);
}
