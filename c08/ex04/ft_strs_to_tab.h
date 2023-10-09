/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:08:01 by edforte           #+#    #+#             */
/*   Updated: 2023/10/09 16:51:24 by edforte          ###   ########.fr       */
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
	t_stock_str	*multi_array;
	int			i;

	i = 0;
	multi_array = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	while (i < ac)
	{
		multy_array[i].str = av[i];
		multi_array[i].size = ft_strlen(av[i]);
		multy_array[i].copy = ft_strdup(av[i]);
		i ++;
	}
	multi_array[i].str = 0;
	return (multi_array);
}
