/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myanez-p <myanez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:06:32 by melanieyane       #+#    #+#             */
/*   Updated: 2022/11/14 13:28:29 by myanez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>
# include <limits.h>

# define ULL unsigned long long
# define BHMIN "0123456789abcdef"
# define BHMAJ "0123456789ABCDEF"

int		ft_printf(const char *arg0, ...);
int		print_char(char c);
int		print_str(char *str);
int		print_number(int n);
int		print_unsigned_number(unsigned int n);
int		print_hexa_number(unsigned int n, char *base);
int		print_ptr(unsigned long long n, char *base);
size_t	ft_strlen(char const *str);

#endif