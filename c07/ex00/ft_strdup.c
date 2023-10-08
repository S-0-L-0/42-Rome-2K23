/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 07:40:28 by edforte           #+#    #+#             */
/*   Updated: 2023/10/08 11:29:23 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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
