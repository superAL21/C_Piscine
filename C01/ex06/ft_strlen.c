/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:20:52 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/05 14:24:45 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/
#include <unistd.h>

int	ft_strlen(char *str)
{
	int		count;	

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
/*
int	main(void)
{
	int	length;

	length = ft_strlen("Otro día más en la tierra.");
	printf("Este text tiene %d caracteres.", length);
	return (0);
}
*/
