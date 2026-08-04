/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nueva_prueba.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:27:15 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/03 15:34:14 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 +1;
		while (num2 <= 99)
		{
			write(1, &((char []){num1 / 10 + '0'}), 1);
			write(1, &((char []){num1 % 10 + '0'}), 1);
			write(1, " ", 1);
			write(1, &((char []){num2 / 10 + '0'}), 1);
			write(1, &((char []){num2 % 10 + '0'}), 1);
			if (!(num1 == 98 && num2 == 99))
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}
/*
Este es el MAIN del programa
*/
/*
int main (void)
{
	ft_print_comb2();
	return (0);
}
*/
