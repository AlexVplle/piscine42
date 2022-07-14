/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:55:21 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/14 12:06:14 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*remove_white_space(char *str)
{
	while(*str < 33)
		str++;
	return (str);
}

unsigned int	create_number(char *str, int number)
{
//	printf("%s", str);
	if (*str >= '0' && *str <= '9')
	{
		
		return create_number(number * 10 + *str - '0');
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int	negative;
	unsigned int	number;
	str = remove_white_space(str);
	while(*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative++;
		str++;
	}
	number = create_number(str, 0);
	printf("%u", number);
}

int	main(void)
{
	ft_atoi("152");
}
