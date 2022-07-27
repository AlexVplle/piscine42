/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:10:49 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/27 01:04:54 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "util.h"

void	plus(int a, int b)
{
	ft_putnbr((long) a + b);
}

void	minus(int a, int b)
{
	ft_putnbr((long) a - b);
}

void	division(int a, int b)
{
	if (!b)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr((long) a / b);
}

void	multiplication(int a, int b)
{
	ft_putnbr((long) a * b);
}

void	modulo(int a, int b)
{
	if (!b)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr((long) a % b);
}
