/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:17:28 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/12 02:03:00 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	number;
	int				first;
	int				second;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			if (str[i] < 0)
				number = (unsigned char) str[i];
			else
				number = str[i];
			first = number / 16;
			second = number % 16;
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[first], 1);
			write(1, &"0123456789abcdef"[second], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(void)
{
	char	test[] = "€";
	ft_putstr_non_printable(test);
}
