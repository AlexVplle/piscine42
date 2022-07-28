/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:43:14 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/28 17:15:41 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	print_rev(char *c)
{
	if (*c)
	{
		print_rev(c + 1);
		write(1, c, 1);
	}
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
//	print_rev(argv[1]);
	i = ft_strlen(argv[1]) - 1;
	while (i >= 0)
		write(1, &argv[1][i--], 1);
	write(1, "\n", 1);
}
