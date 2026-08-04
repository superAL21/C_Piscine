/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:57:01 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/12 14:11:18 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexa(char c)
{
	char			*b_hex;
	unsigned char	byte;

	b_hex = "0123456789abcdef";
	byte = c;
	ft_putchar(b_hex[byte / 16]);
	ft_putchar(b_hex[byte % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			write (1, "\\", 1);
			hexa(*str);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	*text;
	
	text = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(text);
	return (0);
}
*/
