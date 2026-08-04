/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@sstudent.42urduliz.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:30:58 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/10 18:39:09 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
*/

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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

	text = "HOLA";
	if (ft_str_is_uppercase(text) == 0)
	{
		printf("Algún caracter de esta cadena es minúscula");
	}
	if (ft_str_is_uppercase(text) == 1)
	{
		printf("Esta cadena está en mayúsucula o está vacía");
	}
	return (0);
}
*/
