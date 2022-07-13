/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:15:29 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/13 17:29:05 by avapaill         ###   ########.fr       */
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
	int	count2;
	int	found;

	count = 0;
	while (count < ft_strlen(str))
	{
		found = 1;
		count2 = 0;
		while (count2 < ft_strlen(to_find))
		{
			if (to_find[count2] != str[count + count2])
			{
				found = 0;
				break ;
			}
			count2++;
		}
		if (found)
			return (&str[count]);
		count++;
	}
	return ((void *) 0);
}
