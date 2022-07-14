/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 23:24:51 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/15 01:14:02 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		write(1, "\n", 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	sort_argv(int argc, char *argv[])
{
	
}

int	main(int argc, char *argv[])
{
	int	i;

	sort_argv(argc, argv);
	i = 1;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		//ft_putstr(argv[i]);
		i++;
	}
}
