/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:41:39 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/10 16:52:08 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*text;

	text = "texto$$";
	if (ft_str_is_alpha(text) == 0)
	{
		printf("NO tiene caracteres alfabéticos");
	}
	if (ft_str_is_alpha(text) == 1)
	{
		printf("tiene caracteres alfabéticos o es un string vacío");
	}
	return (0);
}
*/
