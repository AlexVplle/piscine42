/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:50:15 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/14 15:45:15 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				answer;
	unsigned int	i;

	answer = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			answer = s1[i] - s2[i];
			break ;
		}
	}
	if (answer == 0 && i < n)
		answer = s1[i] - s2[i];
	if (answer == 0)
		return (0);
	else if (answer > 0)
		return (1);
	else
		return (-1);
}
