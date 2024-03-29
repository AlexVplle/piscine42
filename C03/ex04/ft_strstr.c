/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:15:29 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/14 00:25:49 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	length;

	length = ft_strlen(to_find);
	if (!length)
		return (str);
	count = 0;
	while (*str)
	{
		if (*str == to_find[count])
			count++;
		else
			count = 0;
		if (count == length)
			return (str - count + 1);
		str++;
	}
	return ((void *) 0);
}
