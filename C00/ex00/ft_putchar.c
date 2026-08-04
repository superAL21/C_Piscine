/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lajen-li <lajen-li@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:18:39 by lajen-li          #+#    #+#             */
/*   Updated: 2025/10/29 16:17:53 by lajen-li         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*Este es el MAIN. El programa empieza por aquí.
*/
/*
int main(void)
{
        char c = 'l';
        ft_putchar(c);
        return (0);
}
*/
