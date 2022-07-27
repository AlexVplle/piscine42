/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:51:13 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/27 02:11:35 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
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
