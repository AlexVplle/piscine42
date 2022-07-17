/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 23:31:27 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/18 00:02:04 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	check_conditions(char *base, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] < 33 || base[i] == 127)
			return (0);
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

