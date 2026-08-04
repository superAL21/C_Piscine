/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:03:28 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/10 18:16:56 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
*/

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*text;

	text = "";
	if (ft_str_is_lowercase(text) == 1)
	{
		printf("Esta cadena tiene solo caracteres minúsculas o está vacía");
	}
	if (ft_str_is_lowercase(text) == 0)
	{
		printf("Esta cadena tiene caracteres distintos a minúsculas");
	}
	return (0);
}
*/
