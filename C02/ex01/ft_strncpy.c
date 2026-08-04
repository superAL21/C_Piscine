/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:54:20 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/10 14:54:22 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdlib.h>
#include <stdio.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*start;

	start = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (start);
}
/*int	ft_strlen(char *src)
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
	int		n;

	text = "Hello1";
	copy = malloc(ft_strlen(text) + 1);
	if (copy == NULL)
	{
		return (1);
	}
	n = 7;
	ft_strncpy(copy, text, n);
	printf("Esta es la copia: %s\n", copy);
	free(copy);
	copy = NULL;
	return (0);
}
*/
