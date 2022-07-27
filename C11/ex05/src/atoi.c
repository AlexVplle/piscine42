/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:55:21 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/26 23:37:44 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*remove_white_space(char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

unsigned int	create_number(char *str, int number)
{
	if (*str >= '0' && *str <= '9')
		return (create_number(str +1, number * 10 + *str - '0'));
	return (number);
}

int	ft_atoi(char *str)
{
	unsigned int	number;
	int				negative;

	negative = 0;
	str = remove_white_space(str);
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative++;
		str++;
	}
	number = create_number(str, 0);
	if (negative % 2)
		return (-1 * number);
	return (number);
}
