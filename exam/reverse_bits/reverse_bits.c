/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:55:22 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/29 00:09:55 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char reverse;

	reverse = 0;

	if (octet / 128)
	{
		octet %= 128;
		reverse += 1; 
	}
	if (octet / 64)
	{
		octet %= 64;
		reverse += 2; 
	}
	if (octet / 32)
	{
		octet %= 32;
		reverse += 4; 
	}
	if (octet / 16)
	{
		octet %= 16;
		reverse += 8; 
	}
	if (octet / 8)
	{
		octet %= 8;
		reverse += 16; 
	}
	if (octet / 4)
	{
		octet %= 4;
		reverse += 32; 
	}
	if (octet / 2)
	{
		octet %= 2;
		reverse += 64; 
	}
	if (octet)
		reverse += 128; 
	return (reverse);
}

int	main()
{
	printf("%d\n", reverse_bits(3));
}
