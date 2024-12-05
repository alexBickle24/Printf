/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 05:57:10 by alex              #+#    #+#             */
/*   Updated: 2024/12/05 01:01:45 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_c(int n, int count)
{
	long long	aux;

	aux = (long long)n;
	if (aux < 0)
	{
		count = count + ft_putchar_c('-');
		aux = aux * -1;
	}
	if (aux >= 10)
	{
		count = ft_putnbr_c((aux / 10), count);
		count = ft_putnbr_c((aux % 10), count);
	}
	else
		count = count + ft_putchar_c((aux + '0'));
	return (count);
}

int	ft_putunbr_base_c(unsigned int unbr, unsigned int base, int count, char f)
{
	if (unbr >= base)
	{
		count = ft_putunbr_base_c((unbr / base), base, count, f);
		count = ft_putunbr_base_c((unbr % base), base, count, f);
	}
	else
		count = count + ft_putchar_base_c("0123456789abcdef", base, unbr, f);
	return (count);
}

int	ft_putadress_c(unsigned long n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	count = count + ft_put_ulong_base_c(n, 16, count, 0);
	return (count);
}

int	ft_put_ulong_base_c(unsigned long n, unsigned long base, int count, char f)

{
	if (n >= base)
	{
		count = ft_put_ulong_base_c((n / base), base, count, f);
		count = ft_put_ulong_base_c((n % base), base, count, f);
	}
	else
		count = count + ft_putchar_base_c("0123456789abcdef", base, n, f);
	return (count);
}

int	ft_strlen_c(const char *s)
{
	int	n;

	n = 0;
	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}
