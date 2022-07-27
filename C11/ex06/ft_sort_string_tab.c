/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:07:54 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/27 01:49:52 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*buffer;

	i = 0;
	while (tab[i] != (void *) 0)
	{
		j = 0;
		while (tab[j + 1] != (void *) 0)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				buffer = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = buffer;
			}
			j++;
		}
		i++;
	}
}
