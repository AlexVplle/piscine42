/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:17:28 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/11 16:21:11 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	hexa()

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char	first;
	char	second;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			first = (str[i] - '0') / 16;
			second = str[i] % 16;
			if ()
		}
	}
}
