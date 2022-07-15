/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:21:02 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/15 14:12:54 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

int	check_conditions(char *base, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] == 127)
			return (0);
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(unsigned int nb, char *base, unsigned int len)
{	
	if (nb < len)
	{
		write(1, &base[nb], 1);
		return ;
	}
	ft_putnbr(nb / len, base, len);
	ft_putnbr(nb % len, base, len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len_base;

	len_base = 0;
	len_base = ft_strlen(base);
	if (len_base < 2 || !check_conditions(base, len_base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr((unsigned int) -1 * nbr, base, len_base);
	}
	else
		ft_putnbr((unsigned int) nbr, base, len_base);
}
