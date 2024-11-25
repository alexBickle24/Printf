/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:15:26 by alex              #+#    #+#             */
/*   Updated: 2024/11/24 23:41:08 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_atoi(const char *nptr)
{
	int	sing;
	int	num;

	sing = 1;
	num = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sing = -1;
		}
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (num * sing);
}
int main(int argz, char **argv)
{
    unsigned int i;
    int len;

    if (argz < 2)
        return(0);
    i = 0;
    while (i < ft_atoi(argv[1]))
    {
        printf("NÚMERO: %d\n", i);
        len = ft_printf("hex: %x\n", i);
        printf("ft len: %i\n", len);
        len = printf("hex: %x\n", i);
        printf("len: %i\n\n", len);
        i++;
    }
    return (0);
}