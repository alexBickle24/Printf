/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:21:38 by alex              #+#    #+#             */
/*   Updated: 2024/11/26 00:23:02 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	arguments;
	int		i;
	int		count;

	va_start(arguments, format);
	i = -1;
	count = 0;
	while (format[++i] != '\0')
	{
		if (format[i] == '"' && (format[i + 1] == '\0' || i == 0))
			write(1, &format[i], 1);
		else if (format[i] == '%' && format[i + 1] != 0)
			count = ft_select_cases(format[++i], arguments, count);
		else if (format[i] == '%' && format[i + 1] == 0)
		{
			va_end(arguments);
			return (-1);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	return (count);
}

int	ft_select_cases(char type, va_list arguments, int count)
{
	if (type == 'c' || type == '%')
		count = count + ft_putchar_c(va_arg(arguments, int));
	else if (type == 's')
		count = count + ft_putstr_c(va_arg(arguments, char *));
	else if (type == 'd' || type == 'i')
		count = ft_putnbr_c(va_arg(arguments, int), count);
	else if (type == 'u')
		count = ft_putunbr_base_c(va_arg(arguments, unsigned int), 10, count,
				0);
	else if (type == 'p')
		count = count + ft_putadress_c(va_arg(arguments, unsigned long));
	else if (type == 'x')
		count = ft_putunbr_base_c(va_arg(arguments, unsigned int), 16, count,
				0);
	else if (type == 'X')
		count = ft_putunbr_base_c(va_arg(arguments, unsigned int), 16, count,
				1);
	return (count);
}
