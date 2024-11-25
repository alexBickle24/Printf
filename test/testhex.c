/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:15:26 by alex              #+#    #+#             */
/*   Updated: 2024/11/24 23:25:57 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    unsigned int i;
    int len;

    i = 0;
    while (i < UINT_MAX)
    {
        len = ft_printf("hex: %x\n", i);
        printf("ft len: %i\n", len);
        len = printf("hex: %x\n", i);
        printf("len: %i\n\n", len);
    }
}