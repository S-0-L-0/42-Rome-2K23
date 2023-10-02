/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:42:31 by edforte           #+#    #+#             */
/*   Updated: 2023/10/02 12:42:31 by edforte          ###   ########.fr       */
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
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9') && \
				(str[i] != ' ' || str[i] != '-' || str[i] != '+' || \
				str[i] != '\t' || str[i] != '\v' || str[i] != '\n' || \
				str[i] != '\r' || str[i] != '\f' || str[i] != '\b'))
			return (result);
		if (str[i] == '-')
			sign = -sign;
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		if (str[i] != '-')
			if ((str[i] >= '0' && str[i] <= '9') && \
					(str[i + 1] < '0' || str[i + 1] > '9'))
				return (sign * result);
		i ++;
	}
	return (sign * result);
}
