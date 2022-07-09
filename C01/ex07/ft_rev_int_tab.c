/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:17:32 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/09 19:03:29 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	middle;
	int	count_forward;
	int	count_backward;
	int	buffer;

	count_forward = 0;
	middle = size / 2;
	while (count_forward < middle)
	{
		count_backward = size - count_forward - 1;
		buffer = tab[count_forward];
		tab[count_forward] = tab[count_backward];
		tab[count_backward] = buffer;
		count_forward++;
	}
}
