/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:23:29 by edforte           #+#    #+#             */
/*   Updated: 2023/10/04 02:24:39 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;

	a = 0;
	while (av[0][a] != '\0' && ac)
	{
		write(1, &av[0][a], 1);
		a++;
	}
	write(1, "\n", 1);
}
