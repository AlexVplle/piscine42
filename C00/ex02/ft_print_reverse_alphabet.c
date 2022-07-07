/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:41:19 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/07 14:39:04 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
