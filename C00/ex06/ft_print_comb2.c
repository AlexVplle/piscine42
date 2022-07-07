/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:45:12 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/07 18:36:36 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_pattern(int first_number, int second_number)
{	
	char	a;
	char	b;
	char	c;
	char	d;

	a = first_number / 10 + '0';
	b = first_number % 10 + '0';
	c = second_number / 10 + '0';
	d = second_number % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	second_number = 1;
	while (first_number < 99)
	{
		second_number = first_number + 1;
		while (second_number < 100)
		{
			write_pattern(first_number, second_number);
			second_number++;
		}
		first_number++;
	}
}
