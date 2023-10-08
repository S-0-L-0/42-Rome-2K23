/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:04:46 by edforte           #+#    #+#             */
/*   Updated: 2023/10/06 12:00:22 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result = result * nb;
			power --;
		}
		return (result);
	}
}
