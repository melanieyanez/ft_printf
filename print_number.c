/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:04:23 by myanez-p          #+#    #+#             */
/*   Updated: 2022/11/11 15:07:53 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbrlen(int n)
{
	int	size;

	size = 0;
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		size ++;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		size ++;
	}
	size ++;
	return (size);
}

int	print_number(int n)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		print_char('-');
		nbr = nbr * -1;
	}
	if (nbr >= 10)
		print_number(nbr / 10);
	print_char((nbr % 10 + 48));
	return (nbrlen(n));
}

/*
int	main(void)
{
	printf("%d", print_number(-2147483648));
	return (0);
}
*/
