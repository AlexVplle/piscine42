/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:17:15 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/13 16:53:18 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	length = ft_strlen(dest);
	i = 0;
	while (length + i + 1 < size && src[i])
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	if (length <= size)
		return (length + ft_strlen(src));
	return (size + ft_strlen(src));
}
