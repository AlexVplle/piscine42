/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:39:01 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/08 01:45:46 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_pattern(int n, char array_number[])
{
	int	j;

	j = 0;
	while (j < n)
	{
		write(1, &array_number[j], 1);
		j++;
	}
	write(1, " ", 1);
}

void	ft_print_combn(int n)
{
	char	array_number[n];
	int		i;

	i = 0;
	while (i < n)
	{
		array_number[i] = i + '0';
		i++;
	}
	while (i >= 0)
	{
		while (array_number[i] < '9' - n + i + 1)
		{
			write_pattern(n, array_number);
			array_number[i]++;
		}
		i--;
	}
}

int	main(void)
{
	ft_print_combn(3);
}
