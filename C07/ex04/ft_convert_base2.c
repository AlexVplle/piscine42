/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:31:23 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/28 12:46:03 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	find_digit(char to_find, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (to_find == base[i])
			return (i);
		i++;
	}
	return (-1);
}

long	convert_number_decimal(char	*nbr, char *base_from, int len_base_from)
{
	int		digit;
	long	number;
	int		i;

	i = 0;
	number = 0;
	while (nbr[i])
	{
		digit = find_digit(nbr[i], base_from);
		if (digit == -1)
			break ;
		number = number * len_base_from + digit;
		i++;
	}
	return (number);
}

int	ft_length_to(long number, int len_base_to)
{
	int	i;

	i = 1;
	while (number >= len_base_to)
	{
		number /= len_base_to;
		i++;
	}
	return (i);
}

char	*create_number(int negative, long num, int len_base_to, char *base_to)
{
	char	*result;
	int		length_to;
	int		i;

	if (!num)
		negative = 0;
	length_to = ft_length_to(num, len_base_to) + 1 + negative;
	result = malloc(length_to * sizeof(char));
	if (!result)
		return ((void *) 0);
	i = length_to - 1;
	result[i] = '\0';
	i--;
	result[i] = base_to[num % len_base_to];
	num /= len_base_to;
	i--;
	while (num)
	{
		result[i] = base_to[num % len_base_to];
		num /= len_base_to;
		i--;
	}
	if (negative)
		result[i] = '-';
	return (result);
}	
