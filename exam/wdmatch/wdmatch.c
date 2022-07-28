/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:18:58 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/29 01:25:52 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1])
	{
		while (*argv[2])
		{
			if (*argv[1] == *argv[2])
			{
				write(1, argv[2]++, 1);
				break ;
			}
		argv[2]++;
		}
	argv[1]++;
	}
	write(1, "\n", 1);
}
