/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:15:14 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/11 11:22:31 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
*/

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str -32;
		}
		str++;
	}
	return (start);
}

/*
int	main(void)
{
	char	text[] = "this text IS NORMAL";
	char	*out_ptr;

	out_ptr = ft_strupcase(text);
	printf("El texto en mayúsculas: %s\n", out_ptr);
	return (0);
}
*/
