/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:36:57 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/05 12:39:02 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	resultado;
	int	resto;
	int	a;
	int	b;

	a = 20;
	b = 7;
	ft_div_mod(a, b, &resultado, &resto);
	printf("La división de %d y %d es %d y sobra %d.\n", a, b, resultado, resto);
	return (0);
}
*/
