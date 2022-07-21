/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:50:52 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/21 19:33:58 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	if (i < 1)
		return (0);
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

	while(number >= len_base)
	{
		number /= len_base;
		i++;
	}
	return (i)
}

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	len_base_from;
	unsigned int	len_base_to;
	int				negative;
	int				number;
	int				digit

	len_base_from = ft_strlen(base_from);
	len_base_to = ft_strlen(base_to);
	negative = 0;
	number = 0;
	if (!check_conditions(base_from, len_base_from) || !check_conditions(base_to, len_base_to))
		return (NULL);
	nbr = remove_white_space(nbr);
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			negative++;
		nbr++;
	}
	while(*nbr)
	{
		digit = find_digit(*nbr, base_from);
		if (digit == -1)
			break ;
		number = number * len_base_from + digit;
		nbr++;
	}
}

int	main()
{
	ft_convert_base("1100100", "01", "01");
}
