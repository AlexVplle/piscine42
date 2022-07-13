/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:55:21 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/13 19:02:23 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*remove_white_space(char *str)
{
	while(*str < 33)
		str++;
	return (str);
}

unsigned int	create_number(char *str, int number)
{
	if (*str >= '0' && *str <= '9')
}

int	ft_atoi(char *str)
{
	int	negative;
	int	number;
	str = remove_white_space(str);
	while(str == '+' || str == '-')
	{
		if (str == "-")
			negative++;
		str++;
	}
}
