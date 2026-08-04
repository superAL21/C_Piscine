/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   otra.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:46:26 by lajen-li          #+#    #+#             */
/*   Updated: 2025/10/30 16:51:01 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}

/*Este es el MAIN del programa.
*/
/*
int main()
{
	ft_print_numbers();
	return(0);
}
*/
