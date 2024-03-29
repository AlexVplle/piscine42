/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 01:04:09 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/20 15:29:07 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
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
	return ((dest + i));
}

int	ft_all_length(int size, char **strs, char *sep)
{
	int	length;
	int	separator;
	int	i;

	length = 0;
	separator = 0;
	i = 0;
	while (i < size)
	{
		if (separator)
			length += ft_strlen(sep);
		length += ft_strlen(*(strs + i));
		separator = 1;
		i++;
	}
	return (length + 1);
}

char	*ft_all_strcpy(int size, char **strs, char *sep, char *string)
{
	char	*start_string;
	int		separator;
	int		i;

	start_string = string;
	separator = 0;
	i = 0;
	while (i < size)
	{
		if (separator)
			string = ft_strcpy(string, sep);
		string = ft_strcpy(string, *(strs + i));
		separator = 1;
		i++;
	}
	*string = '\0';
	return (start_string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		all_size;

	if (!size)
	{
		string = malloc(1 * sizeof(char));
		if (!string)
			return ((void *) 0);
		*string = '\0';
		return (string);
	}
	all_size = ft_all_length(size, strs, sep);
	string = malloc((all_size) * sizeof(char));
	string = ft_all_strcpy(size, strs, sep, string);
	return (string);
}
