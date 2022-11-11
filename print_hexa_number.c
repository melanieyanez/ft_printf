/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_number.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:41:48 by myanez-p          #+#    #+#             */
/*   Updated: 2022/11/11 17:30:39 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hnbrlen(unsigned int n, char *base)
{
	unsigned int	base_len;
	int				size;

	base_len = (unsigned int) ft_strlen(base);
	size = 0;
	while (n >= base_len)
	{
		n = n / base_len;
		size ++;
	}
	size ++;
	return (size);
}

int	print_hexa_number(unsigned int n, char *base)
{
	unsigned int	base_len;

	base_len = (unsigned int) ft_strlen(base);
	if (n >= base_len)
	{
		print_hexa_number((n / base_len), base);
		print_char(base[n % base_len]);
	}
	else
		print_char(base[n]);
	return (hnbrlen(n, base));
}

// 20 / 16 = 1
// 1

//0123456789
//0000009
//0000099
//0000100

//01234156789abcdef
//f = 15
//10 = 16
//11 = 17
//12 = 18
//13 = 19
//14 = 20
//...
//19 = 25
//1a = 26
//...
//1f = 31
//20 = 32

//100
// 100 // 16 = 6 (6e element de la base)
// 100 % 16 = 4 (4e element de la base)
// ....4
// 64

//1000
// 1000 // 16 = 62
// je renvoie 62 dans ma fonction
// 1000 % 16 = 8
// print dans le terminal

// n = 62 // 16 = 3 (le prochain n)
// je renvoie 3 dans ma fonction
// 62 % 16 = 14
// print dans le terminal

// n = 3
// 3 // 16 = 0
// du coup stop

// (3 % 16)3 (60 % 16)E  (1000 % 16)8

//2328
//2328 // 16 = 145
// je renvoie 145
//2328 % 16 = 8
// print dans le terminal

// 145 // 16 = 9
// 145 %  16 = 1
// print dans le terminal

// 918