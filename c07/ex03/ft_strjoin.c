/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:47:35 by edforte           #+#    #+#             */
/*   Updated: 2023/10/08 13:52:05 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (i < size)
	{
		res = res + ft_len(strs[i]);
		if (i != size -1)
			res = res + ft_len(sep);
		i ++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		word;
	int		l;
	int		c;
	int		j;
	char	*str;

	str = (char *) malloc(total_len(size, strs, sep) + 1);
	if (size < 1)
		return (str);
	word = 0;
	j = 0;
	while (word < size)
	{
		l = 0;
		while (strs[word][l])
			str[j++] = strs[word][l++];
		c = 0;
		if (!(word == size - 1))
			while (sep[c])
				str[j++] = sep[c++];
		word ++;
	}
	str[j] = '\0';
	return (str);
}
