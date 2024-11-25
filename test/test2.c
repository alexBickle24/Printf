/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:08:05 by alex              #+#    #+#             */
/*   Updated: 2024/11/23 23:26:09 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
void funcion(long l)
{
    printf("el valor del long es: %ld\n", l);
}

int main()
{
  char c = -13;
  int x = c;
  int d = -20;
  long l = d;
  printf("el numero es el: %d\n", x);
  printf("el numero es el: %ld\n", l);
  funcion(d);
  return(0);
}
*/


int main(void)
{
  int x;
  x = 3 / 0;
  printf("el valor de x es:  %d", x);
  return(0);
}