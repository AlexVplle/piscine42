/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:47:52 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/27 00:52:39 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "operator.h"
#include "util.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	find_operator(char c)
{
	char	*operator;
	int		i;

	i = 0;
	operator = "+-/*%";
	while (operator[i])
	{
		if (c == operator[i])
			return (i);
		i++;
	}
	return (-1);
}

int	main(int argc, char *argv[])
{
	void	(*tab_operator[5])(int, int);
	int		index_operator;

	tab_operator[0] = &plus;
	tab_operator[1] = &minus;
	tab_operator[2] = &division;
	tab_operator[3] = &multiplication;
	tab_operator[4] = &modulo;
	index_operator = find_operator(argv[2][0]);
	if (argc != 4)
		return (1);
	if (ft_strlen(argv[2]) != 1 || index_operator == -1)
	{
		write(1, "0\n", 2);
		return (1);
	}
	(*tab_operator[index_operator])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	write(1, "\n", 1);
}
