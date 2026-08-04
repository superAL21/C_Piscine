/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:28:22 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/10 11:43:14 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdlib.h>
#include <stdio.h>
*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
/*
int	ft_strlen(char *src)
{
	int		count;	

	count = 0;
	while (*src)
	{
		count++;
		src++;
	}
	return (count);
}

int	main(void)
{
	char	*copy;
	char	*text;

	text = "In 42 we trust";
	copy = malloc(ft_strlen(text) + 1);
	if (copy == NULL)
	{
		return (1);
	}
	ft_strcpy(copy, text);
	printf("Esta es la copia: %s\n", copy);
	free(copy);
	copy = NULL;
	return (0);
}
*/
