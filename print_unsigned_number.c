/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_number.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:59:22 by myanez-p          #+#    #+#             */
/*   Updated: 2022/11/11 15:00:45 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unbrlen(unsigned int n)
{
	int	size;

	size = 0;
	while (n >= 10)
	{
		n = n / 10;
		size ++;
	}
	size ++;
	return (size);
}

int	print_unsigned_number(unsigned int n)
{
	unsigned long int	nbr;

	nbr = n;
	if (nbr >= 10)
		print_unsigned_number(nbr / 10);
	print_char((nbr % 10 + 48));
	return (unbrlen(n));
}

/*
int	main(void)
{
	printf("%u", print_number(-95485221));
	return (0);
}
*/
