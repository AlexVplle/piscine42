/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:50:52 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/28 12:46:55 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		convert_number_decimal(char *nbr, char *base_from, int len_base_from);
char	*create_number(int negative, long num, int len_base_to, char *base_to);

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

	if (len < 2)
		return (0);
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

char	*remove_white_space(char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

int	len_number(int number, int len_base)
{
	int	i;

	i = 1;
	while (number >= len_base)
	{
		number /= len_base;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	len_base_from;
	unsigned int	len_base_to;
	int				negative;
	long			number;
	char			*string;

	len_base_from = ft_strlen(base_from);
	len_base_to = ft_strlen(base_to);
	negative = 0;
	if (!check_conditions(base_from, len_base_from)
		|| !check_conditions(base_to, len_base_to))
		return ((void *) 0);
	nbr = remove_white_space(nbr);
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			negative++;
		nbr++;
	}
	negative %= 2;
	number = convert_number_decimal(nbr, base_from, len_base_from);
	string = create_number(negative, number, len_base_to, base_to);
	if (!string)
		return ((void *) 0);
	return (string);
}
