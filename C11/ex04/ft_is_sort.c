/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:45:40 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/27 14:46:51 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	direction;

	direction = 0;
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0 && direction < 0)
			return (0);
		if ((*f)(tab[i], tab[i + 1]) < 0 && direction > 0)
			return (0);
		if (direction == 0)
			direction = (*f)(tab[i], tab[i + 1]);
		i++;
	}
	return (1);
}
