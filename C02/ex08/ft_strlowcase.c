/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:14:23 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/11 12:22:58 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (start);
}

/*
int	main(void)
{
	char	text[] = "THIS IS a normal TeXt";
	char	*out_ptr;

	out_ptr = ft_strlowcase(text);
	printf("Este es el texto en minúsculas: %s\n", out_ptr);
	return (0);
}
*/
