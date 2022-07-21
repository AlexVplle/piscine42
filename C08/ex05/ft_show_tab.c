/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:52:53 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/21 14:16:11 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{	
	if (nb < 10)
	{
		write(1, &"0123456789"[nb], 1);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while ((*par).str)
	{
		ft_putstr((*par).str);
		write(1, "\n", 1);
		ft_putnbr((*par).size);
		write(1, "\n", 1);
		ft_putstr((*par).copy);
		write(1, "\n", 1);
		par++;
	}
}
