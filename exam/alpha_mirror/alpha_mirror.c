/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:01:24 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/29 01:08:57 by avapaill         ###   ########.fr       */
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
			*argv[1] = 'z' - *argv[1] + 'a';
		else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			*argv[1] = 'Z' - *argv[1] + 'A';
		write(1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
}
