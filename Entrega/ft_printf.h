/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 06:12:39 by alex              #+#    #+#             */
/*   Updated: 2024/12/11 01:42:52 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int	ft_strlen_c(const char *s);
int	ft_printf(char const *format, ...);
int	ft_select_cases(char type, va_list arguments, int count);
int	ft_putchar_c(int c);
int	ft_putchar_base_c(char *elements, unsigned int base, unsigned int n,
		char flag);
int	ft_putstr_c(char *string);
int	ft_putnbr_c(int n, int count);
int	ft_putunbr_base_c(unsigned int n, unsigned int base, int count, char flag);
int	ft_put_ulong_base_c(unsigned long n, unsigned long base, int count,
		char flag);
int	ft_putadress_c(unsigned long n);

#endif