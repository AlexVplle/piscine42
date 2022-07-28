/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:24:06 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/28 00:55:16 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1])
	{
		i = 1;
		if (*argv[1] >= 'a' && *argv[1] <= 'z')
			i = *argv[1] - 'a' + 1;
		else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			i = *argv[1] - 'A' + 1;
		while (i--)
			write(1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
}
