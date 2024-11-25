/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:47:35 by alex              #+#    #+#             */
/*   Updated: 2024/11/26 00:23:14 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:44:08 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/10/31 17:00:51 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    
    char *ptr = malloc(1);
    char *nully = 0;
    int len = 0;
    
    len = ft_printf("Me llamo Iñigo Montoya\n");
    printf("ft len: %i\n", len);
    len = printf("Me llamo Iñigo Montoya\n");
    printf("len: %i\n", len);
    
    
    len = ft_printf("Hola. Me llamo %s. Mataste a mi padre. Prepárate a morir %c\n", "Iñigo Montoya", 'x');
    printf("ft len: %i\n", len);
    len = printf("Hola. Me llamo %s. Mataste a mi padre. Prepárate a morir %c\n", "Iñigo Montoya", 'x');
    printf("len: %i\n", len);


    len = ft_printf("Hola. Me llamo %s\n", nully);
    printf("ft len: %i\n", len);
    len = printf("Hola. Me llamo %s\n", nully);
    printf("len: %i\n", len);
    
    
    len = ft_printf("Numero: %i, otro numero: %u y otro numero %d\n", -9200, 80008800, 1560025);
    printf("ft len: %i\n", len);
    len = printf("Numero: %i, otro numero: %u y otro numero %d\n", -9200, 80008800, 1560025);
    printf("len: %i\n\n", len);
    
    
    len = ft_printf("hex: %x\n", 15685);
    printf("ft len: %i\n", len);
    len = printf("hex: %x\n", 15658);
    printf("len: %i\n\n", len);
    
    len = ft_printf("HEX: %X\n", UINT_MAX);
    printf("ft len: %i\n", len);
    len = printf("HEX: %X\n", UINT_MAX);
    printf("len: %i\n\n", len);
 

    len = ft_printf("Puntero: %p\n", ptr);
    printf("ft len: %i\n", len);
    len = printf("Puntero: %p\n", ptr);
    printf("len: %i\n\n", len);
    free(ptr);
    
    ptr = 0;
    len = ft_printf("Puntero nulo: %p\n", ptr);
    printf("ft len: %i\n", len);
    len = printf("Puntero nulo: %p\n", ptr);
    printf("len: %i\n\n", len);

    /*len = printf("Hola %s %", "Agapito");
    printf("len: %i\n", len);
    printf("\n");
    len = ft_printf("Hola %s %", "Agapito");
    printf("ft len: %i\n", len);
    printf("\n");*/

    //printf("Hola", nully);
    ft_printf("Hola", nully);
    printf("\n");
    //printf("%s");
    printf("\n");
    //ft_printf("%s");
    printf("\n");
    return (0);
}