/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:08:01 by edforte           #+#    #+#             */
/*   Updated: 2023/10/11 17:13:17 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src);
	dup = (char *)malloc(len + 1);
	if (dup != NULL)
		ft_strcpy(dup, src);
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*multiarray;
	int			i;

	multiarray = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (multiarray == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		multiarray[i].str = av[i];
		multiarray[i].size = ft_strlen(av[i]);
		multiarray[i].copy = ft_strdup(av[i]);
		i ++;
	}
	multiarray[i].str = 0;
	multiarray[i].size = sizeof(NULL);
	multiarray[i].copy = 0;
	return (multiarray);
}
