/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 07:20:14 by edforte           #+#    #+#             */
/*   Updated: 2023/09/27 08:35:55 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <= n)
	{
		while ((*s1 || *s2) && (*s1 == *s2))
		{
			s1 ++;
			s2 ++;
		}
	}
	return (*s1 - *s2);
}
