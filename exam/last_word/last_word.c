/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:14:02 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/28 23:42:39 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		word;
	char	*str;

	str = (void *) 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	word = 0;
	while (*argv[1])
	{
		if (*argv[1] && (*argv[1] == '\b' || *argv[1] == '\t'
				|| *argv[1] == '\v' || *argv[1] == ' '))
			word = 0;
		else if (!word)
		{
			word = 1;
			str = argv[1];
		}
		argv[1]++;
	}
	if (!str)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (*str && (*str != '\b' && *str != '\t'
			&& *str != '\v' && *str != ' '))
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
