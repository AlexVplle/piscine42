/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:56:02 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/07 18:37:25 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_pattern(char hundred_number, char ten_number, char unity_number)
{
	write(1, &hundred_number, 1);
	write(1, &ten_number, 1);
	write(1, &unity_number, 1);
	if (hundred_number != '7' || ten_number != '8' || unity_number != '9' )
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hundred_number;
	char	ten_number;
	char	unity_number;

	hundred_number = '0';
	ten_number = '0';
	unity_number = '0';
	while (hundred_number < '8')
	{
		ten_number = hundred_number + 1;
		while (ten_number < '9')
		{
			unity_number = ten_number + 1;
			while (unity_number <= '9')
			{
				write_pattern(hundred_number, ten_number, unity_number);
				unity_number++;
			}
			ten_number++;
		}
		hundred_number++;
	}
}
