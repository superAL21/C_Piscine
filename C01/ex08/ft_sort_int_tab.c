/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:47:45 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/06 12:58:00 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	while (a < size - 1)
	{
		b = 0;
		while (b < size - 1 - a)
		{
			if (tab[b] > tab [b + 1])
			{
				temp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	int	array[] = {3, -1 , 888, -98, 5, 21, -12};
	int	size;

	size = sizeof(array) / sizeof(array[0]);
	printf("Array original: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]); 
	}
	printf("\n");
	ft_sort_int_tab(array, size);

	printf("Array ordenado: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]); 
	}
	return (0);
}
*/
