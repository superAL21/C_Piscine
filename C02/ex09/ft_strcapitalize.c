/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.c>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:19:09 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/11 13:26:59 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>
*/
char	*ft_strcapitalize(char *str)
{
	char	*start;
	int		i;

	i = -1;
	start = str;
	while (str[++i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' '
			|| str[i - 1] == '+'
			|| str[i - 1] == '-')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else
		{
			if ((str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] = str[i] + 32;
			}
		}
	}
	return (start);
}

/*
int	main(void)
{
	char	text[] = "HELLO";
	char	*out;

	out = ft_strcapitalize(text);
	printf("Este es el texto convertido: %s\n", out);
	return (0);
}
*/
