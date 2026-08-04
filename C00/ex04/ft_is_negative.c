/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@42urduliz.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:35:59 by lajen-li          #+#    #+#             */
/*   Updated: 2025/10/30 12:16:14 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	int		number;
	char	letter_positive;
	char	letter_negative;

	letter_positive = 'P';
	letter_negative = 'N';
	number = n;
	if (number < 0)
	{
		write(1, &letter_negative, 1);
	}
	else
	{
		write(1, &letter_positive, 1);
	}
}

/* Este es el MAIN. El programa empieza por aquí.
*/

/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}
*/
