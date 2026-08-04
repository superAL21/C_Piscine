/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:46:29 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/10 18:52:33 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
*/

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
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

	text = "Todos son imprimibes";
	if (ft_str_is_printable(text) == 1)
	{
		printf ("Todos los caracteres son imprimibles: %s\n", text);
	}
	if (ft_str_is_printable(text) == 0)
	{
		printf ("Al menos un caracter NO es imprimible");
	}
}
*/
