/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:14:13 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/05 15:20:09 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	end = size -1;
	start = 0;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int main(void)
{
    int numeros[] = {111, 2545, 6553, 54, 5};
    int size = sizeof(numeros) / sizeof(numeros[0]);

    printf("Array original: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    ft_rev_int_tab(numeros, size);

    printf("Array invertido: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return (0);
}
*/
