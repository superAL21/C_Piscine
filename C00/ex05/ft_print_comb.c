/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:38:03 by lajen-li          #+#    #+#             */
/*   Updated: 2025/10/30 18:04:32 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int		unit;
	int		tens;
	int		hundreds;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1;
		while (tens <= '8')
		{
			unit = tens + 1;
			while (unit <= '9')
			{
				write (1, &hundreds, 1);
				write (1, &tens, 1);
				write (1, &unit, 1);
				if (!(hundreds == '7' && tens == '8' && unit == '9'))
					write (1, ", ", 2);
				unit++;
			}
			tens++;
		}
		hundreds++;
	}
}

/*Este es el MAIN del programa.
*/
/*
int	main(void)
{
	ft_print_comb();
	return(0);
}
*/
