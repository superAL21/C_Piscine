/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:53:28 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/03 19:26:41 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	int		value;

	value = 42;
	*nbr = value;
}

/*
int main (void)
{
	int num = 0;
	
	ft_ft(&num);
	write(1, &num,1);
	return (0);
}
*/
