/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 22:53:04 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/28 23:04:44 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_if_exists(char to_find, char *str)
{
	while (*str)
	{
		if (*str == to_find)
			return (1);
		str++;
	}
	return (0);
}

int	check_duplicate(char *str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == str[index])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (check_if_exists(argv[1][i], argv[2]) && check_duplicate(argv[1], i))
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
