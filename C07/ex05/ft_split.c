/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:58:52 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/22 12:50:57 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char	*charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	word_length(char *str, char *charset)
{
	int	count;

	count = 0;
	while (str[count] && !is_separator(str[count], charset))
		count++;
	return (count);
}

char	*word_copy(char *src, int n)
{
	char	*dest;

	dest = malloc((n + 1) * sizeof(char *));
	if (!dest)
		return ((void *) 0);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

int	count_word(char *str, char *charset)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*str)
	{
		if (!is_separator(*str, charset) && !word)
		{
			count++;
			word = 1;
		}
		else if (is_separator(*str, charset))
			word = 0;
		str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		number_word;
	int		i;
	char	**string;
	int		len_word;

	number_word = count_word(str, charset);
	string = malloc((number_word + 1) * sizeof(char *));
	if (!string)
		return ((void *) 0);
	i = 0;
	while (i < number_word)
	{
		while (*str && is_separator(*str, charset))
			str++;
		len_word = word_length(str, charset);
		string[i] = word_copy(str, len_word);
		if (!string[i])
			return ((void *) 0);
		str += len_word;
		i++;
	}
	string[number_word] = 0;
	return (string);
}
