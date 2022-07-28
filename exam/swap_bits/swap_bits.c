/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 00:21:05 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/29 00:31:54 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	swap;
	
	swap = 0;
	if (octet / 128)
	{
		octet %= 128;
		swap += 8;
	}
	if (octet / 64)
	{
		octet %= 64;
		swap += 4;
	}
	if (octet / 32)
	{
		octet %= 32;
		swap += 2;
	}
	if (octet / 16)
	{
		octet %= 16;
		swap += 1;
	}
	if (octet / 8)
	{
		octet %= 8;
		swap += 128;
	}
	if (octet / 4)
	{
		octet %= 4;
		swap += 64;
	}
	if (octet / 2)
	{
		octet %= 2;
		swap += 32;
	}
	if (octet)
		swap += 16;
	return (swap);
}

int	main()
{
	printf("%d\n", swap_bits(20));
}
