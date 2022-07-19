/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:55:47 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/19 19:34:05 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(long range)
{
	int		*tab;
	int		i;
	
	if (range <= 0)
		return ((void *) 0);
	tab = malloc(range * sizeof(int));
	if (!tab)
		return ((void *) 0);
	i = 0;
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	long	range_number;
	
	range_number = max - min;
	*range = ft_range(min, max);
	if (!range)
		return (-1);
}
