/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:14:44 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/21 14:07:49 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dest;

	length = ft_strlen(src);
	dest = malloc((length + 1) * sizeof(char));
	if (!dest)
		return ((void *) 0);
	ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					size_string;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!tab)
		return ((void *) 0);
	while (i < ac)
	{
		size_string = ft_strlen(av[i]);
		tab[i].size = size_string;
		tab[i].str = malloc ((size_string + 1) * sizeof(char));
		if (!tab[i].str)
			return ((void *) 0);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
			return ((void *) 0);
		i++;
	}
	tab[ac].str = 0;
	return (tab);
}
