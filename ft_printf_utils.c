/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 05:57:10 by alex              #+#    #+#             */
/*   Updated: 2024/11/23 07:55:25 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar_c(int c)
{
    c = (unsigned char)c;
    write(1, &c, 1);
    return(1);
}


int ft_putstr_c(char *string)
{
    int count;

    if (!string)
    {
        write(1, "(null)", 6);
        return(6);
    }
    count = ft_strlen_c(string);
    write(1, string, count);
    return(count);
}


int ft_putnbr_c(int n, int count)
{
    int x;
    long temp;

    temp = (long long)n;
    x = 1;
    if (temp < 0)
    {
        count = count + ft_putchar_c('-');
        temp = temp * -1;
    }
    while((temp / x) >= 10)
        x = x * 10;
    if (temp >= 10)
    {
        count = count + ft_putchar_c((temp / x) + 48);
        return(ft_putnbr_c((int)(temp % x), count));
    }
    else
    {
        count = count + ft_putchar_c((temp + '0'));
        return(count);
    }
}


int ft_put_unbr_base_c(unsigned int n, unsigned int base, int count, char flag)
{
    unsigned int x;

    x = 1;
    while((n / x) >= base)
        x = x * base;
    if (n >= base)
    {
        count = count + ft_putbase_c("0123456789abcdef", base, (n / x), flag);
        return(ft_put_unbr_base_c((n % x), base, count, flag));
    }
    else
    {
        count = count + ft_putbase_c("0123456789abcdef", base, (n / x), flag);
        return(count);
    }
}


int ft_putadress_c(unsigned long n)
{
    int count;

    count = 0;
    if (n == 0)
    {
        write(1, "(nil)", 5);
        return(5);
    }
    write(1, "0x", 2);
    count = 2;
    count = count + ft_put_ul_base_c(n, 16, count, 0);
    return(count);
}


int ft_put_ul_base_c(unsigned long n, unsigned long base, int count, char flag)
{
    unsigned long x;

    x = 1;
    while((n / x) >= base)
        x = x * base;
    if (n >= base)
    {
        count = count + ft_putbase_c("0123456789abcdef", 16, (n / x), flag);
        return(ft_put_ul_base_c((n % x), 16, count, flag));
    }
    else
    {
        count = count + ft_putbase_c("0123456789abcdef", 16, (n / x), flag);
        return(count);
    }
}


int ft_putbase_c(char *elements, unsigned int base, unsigned int n, char flag)
{
    char aux;
    if (n < base)
    {
        if (flag && n >= 10)
        {
            aux = elements[n] - 32;
            write(1, &aux, 1);
            return(1);
        }
    }
    write(1, &elements[n], 1);
    return(1);
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





/*

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    n = (long long)n;
    if (n < 0)
    {
        write(1, "-", 1);
        n = n * -1;
    }
    if (n >=10)
    {
        ft_putnbr((n / 10));
    }
    ft_putchar(((n % 10) + '0'));
}


//con esta me los imprime alreves
int ft_putnbr_c(int n, int count)
{

    if (n < 0)
    {
        write(1, "-", 1);
        n = n + -1;
        count =+ 1;
    }
    if (n < 10)
    {
        count = count + ft_putchar_c(n + '0');
        return(count);
    }
    else
    {
        count = count + ft_putchar_c(((n % 10) + '0'));
        return(ft_putnbr_c((n / 10), count));
    }
}


void ft_putbase(char *elements, int base, long n, char flag)
{
    int i;

    i = 0;
    if (flag)
    {
        while(i >= 10 && elements[i] != '\0')
        {
            elements[i] = elements[i] - 32;
            i++;
        }
    }
    if (n < base)
        write(1, &elements[n], 1);
}

void ft_putnbr_base(int n, int base)
{
    n = (long)n;
    if (n < 0)
    {
        write(1, "-", 1);
        n = n * -1;
    }
    if (n <= base)
    {
        ft_putbase("0123456789abcdef", base, (n % 10) + '0', 0);
    }
    else
    {
        ft_putbase("0123456789abcdef", base, n % 10, 0);
        ft_putnbr_base((n / 10), 10);
    }
}
*/
/*
int ft_put_unbr_c(unsigned int n, int count)
{
    int x;

    x = 1;
    while((n / x) >= 10)
        x = x * 10;
    if (n >= 10)//habria que poner base
    {
        count = count + ft_putchar_c((n / x) + 48);
        return(ft_put_unbr_c((n % x), count));
    }
    else
    {
        count = count + ft_putchar_c((n + '0'));
        return(count);
    }
}
*/