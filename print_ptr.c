/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:25:07 by myanez-p          #+#    #+#             */
/*   Updated: 2022/11/14 13:29:13 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pnbrlen(unsigned long long n, char *base)
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

int	print_ptr(unsigned long long n, char *base)
{
	unsigned int	base_len;

	base_len = (unsigned int) ft_strlen(base);
	if (n >= base_len)
	{
		print_ptr((n / base_len), base);
		print_char(base[n % base_len]);
	}
	else
		print_char(base[n]);
	return (pnbrlen(n, base));
}
