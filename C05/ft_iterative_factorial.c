/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:39:18 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/17 18:55:09 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	while (nb >= 0)
	{
		res *= nb;
		nb--;
	}
	return (nb);
}
