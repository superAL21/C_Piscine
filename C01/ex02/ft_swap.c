/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:07:49 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/05 11:38:08 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a ;
	*a = *b ;
	*b = c ;
}

/*
int	main(void)
{
	int	num;
	int	num2;

	num = 41;
	num2 = 42;
	write(1, &num, 1);
	write(1, &num2, 1);
	write(1, " -- ", 4);
	ft_swap(&num, &num2);
	write(1, &num, 1);
	write(1, &num2, 1);
	return (0);
}
*/
