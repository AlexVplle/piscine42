/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 00:43:03 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/11 11:17:20 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] && str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && capitalize)
				str[i] -= 32;
			capitalize = 0;
		}
		else
			capitalize = 1;
		i++;
	}
	return (str);
}
