/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:32:53 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/10 17:46:04 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
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

	text = "654654";
	if (ft_str_is_numeric(text) == 1)
	{
		printf("Este string contiene números o es vacío");
	}
	if (ft_str_is_numeric(text) == 0)
	{
		printf("Esta cadena NO contiene solo caracteres numéricos");
	}
	return (0);
}
*/
