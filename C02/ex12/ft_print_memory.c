/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:31:55 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/14 01:19:18 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int hexa)
{
	write(1, &"0123456789abcdef"[hexa], 1);
}

void	write_hexa(unsigned long long nb)
{	
	if (nb < 16)
	{
		ft_putchar(nb);
		return ;
	}	
	else
	{
		write_hexa(nb / 16);
		write_hexa(nb % 16);
	}
}

void	print_address(void *addr)
{
	unsigned long long addr_long;

	addr_long = (unsigned long long) &addr;
	write_hexa(addr_long);
	write(1, ": ", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	count;
	
	print_address(addr);
	while (count < 8)
	{
		write_hexa((unsigned long long) *addr);
		addr++;
		write_hexa((unsigned long long) *addr);
		write(1, " ", 1);
		addr++;
		count++;
	}
}

int		main(void)
{
	char str[] = "Ceci est un test d'affichage de print memory!\nSegFault";
	ft_print_memory(str, 54);
}
