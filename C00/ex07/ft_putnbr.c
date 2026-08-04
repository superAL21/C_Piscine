/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:41:22 by lajen-li          #+#    #+#             */
/*   Updated: 2025/11/03 16:48:04 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
	}
	digit = (nb % 10) + '0';
	write (1, &digit, 1);
}

/*
Este es el MAIN del programa.
*/
/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/
