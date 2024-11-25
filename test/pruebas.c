/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 00:50:08 by alex              #+#    #+#             */
/*   Updated: 2024/11/23 01:01:50 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
int main(void)
{
    int i = 34567;
    ft_putnbr_base(i, 10);
    return(0);
}