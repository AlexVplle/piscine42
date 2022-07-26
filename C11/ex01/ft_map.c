/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:44:29 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/26 16:34:14 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	i = 0;
	new_tab = malloc(sizeof(int) * length);
	if (!new_tab)
		return ((void *) 0);
	while (i < length)
	{
		new_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (new_tab);
}
