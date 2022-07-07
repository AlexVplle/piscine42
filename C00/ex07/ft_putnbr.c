/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:33:36 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/08 00:37:59 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	unity_to_process;
	int	next_to_process;

	unity_to_process = nb % 10;
	next_to_process = nb / 10;
	if (!next_to_process)
	{
		ft_putchar(nb + '0');
	}
	else if (next_to_process < 0)
	{
		ft_putchar('-');
		ft_putnbr((-1) * next_to_process);
		ft_putchar(-unity_to_process + '0');
	}
	else
	{
		ft_putnbr(next_to_process);
		ft_putnbr(unity_to_process);
	}
}
