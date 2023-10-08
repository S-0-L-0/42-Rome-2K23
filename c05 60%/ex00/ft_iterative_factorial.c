/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:35:53 by edforte           #+#    #+#             */
/*   Updated: 2023/10/06 11:39:42 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		fact = nb;
		while (nb > 1)
		{
			nb --;
			fact = fact * nb;
		}
		return (fact);
	}
	return (0);
}
