/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:55:34 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/27 00:49:27 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_number(unsigned long nb)
{	
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}	
	write_number(nb / 10);
	write_number(nb % 10);
}

void	ft_putnbr(long nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		write_number((unsigned long) -1 * nb);
	}
	else
		write_number((unsigned long) nb);
}
