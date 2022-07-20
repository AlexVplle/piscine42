/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:55:47 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/20 00:28:08 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	range_number;
	int		*tab;
	int		i;

	i = 0;
	range_number = max - min;
	if (range_number <= 0)
	{
		*range = (void *) 0;
		return (0);
	}
	tab = malloc(range_number * sizeof(int));
	if (!tab)
		return (-1);
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (range_number);
}
