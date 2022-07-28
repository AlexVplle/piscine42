/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 00:39:52 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/29 01:00:10 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_duplicate(char *str, int index, char c)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (check_duplicate(argv[1], i, argv[1][i]))
			write(1, &argv[1][i], 1);
		i++;
	}
	j = 0;
	while (argv[2][j])
	{
		if (check_duplicate(argv[1], i, argv[2][j]) && check_duplicate(argv[2], j, argv[2][j]))
			write(1, &argv[2][j], 1);
		j++;
	}
	write(1, "\n", 1);
}
