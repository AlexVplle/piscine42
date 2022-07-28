/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:14:12 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/28 13:37:27 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1])
	{
		if (*argv[1] >= 'a' && *argv[1] <= 'z')
			*argv[1] -= 32;
		else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			*argv[1] += 32;
		write(1, argv[1], 1);	
		argv[1]++;
	}
	write(1, "\n", 1);
}
