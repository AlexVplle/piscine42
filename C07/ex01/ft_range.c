/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:27:09 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/19 18:50:22 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	range;
	int		*tab;
	int		i;
	
	i = 0;
	range = max - min;
	if (range <= 0)
		return ((void *) 0);
	tab = malloc(range * sizeof(int));
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
