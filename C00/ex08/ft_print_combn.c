/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:39:01 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/08 13:30:27 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_pattern(int array_number[], int length, int separator)
{
	char	number;

	if (separator)
	{
		write(1, ", ", 2);
	}
	while (length >= 0)
	{
		number = '0' + array_number[length];
		write(1, &number, 1);
		length--;
	}
}

void	next_number(int an[], int dtp, int *separator, int length)
{
	while (an[dtp] < 10)
	{
		if (!dtp)
		{
			write_pattern(an, length, *separator);
			*separator = 1;
		}
		else
		{
			an[dtp -1] = an[dtp] + 1;
			next_number(an, dtp -1, separator, length);
		}
		an[dtp]++;
	}
}

void	ft_print_combn(int n)
{
	int	array_number[10];
	int	separator;

	separator = 0;
	array_number[n - 1] = 0;
	next_number(array_number, n - 1, &separator, n - 1);
}
