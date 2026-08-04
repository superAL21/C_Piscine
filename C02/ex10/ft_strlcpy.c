/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:33:22 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/11 17:44:20 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
*/
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_src = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src [i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len_src);
}

/*
int	main(void)
{
	
	char	destino[50];
	int	tamaño;
	char	*origen;
	unsigned int	len_copy;
	
	origen = "Esto es una prueba";
	tamaño = 5;
	len_copy = ft_strlen(origen);
	ft_strlcpy(destino, origen, tamaño);
	printf("El texto copiado es: %s\n", destino);
	return (0);
}
*/
