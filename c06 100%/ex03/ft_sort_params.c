/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:34:34 by edforte           #+#    #+#             */
/*   Updated: 2023/10/04 02:38:05 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*sw;

	i = 1;
	j = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc -1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				sw = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = sw;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	if (argc == 1)
		return (0);
	sort(argc, argv);
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
