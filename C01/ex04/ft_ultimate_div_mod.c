/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:16:55 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/05 13:24:48 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	division = *a / *b;
	modulo = *a % *b;
	*a = division;
	*b = modulo;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 25;
	num2 = 4;
	printf("Antes de la funcion:\n");
	printf("  num1 (dividendo) = %d\n", num1);
	printf("  num2 (divisor)   = %d\n", num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("\nDespues de la funcion:\n");
	printf("  num1 (cociente) = %d \n", num1);
	printf("  num2 (resto)    = %d \n", num2);
	return (0);
}
*/
