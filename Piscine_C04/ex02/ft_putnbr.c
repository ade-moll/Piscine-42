/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-moll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:34:08 by ade-moll          #+#    #+#             */
/*   Updated: 2021/02/02 09:16:42 by ade-moll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int a;

	a = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	a = nb;
	if (a > 9)
	{
		ft_putnbr(a / 10);
	}
	a = a % 10 + '0';
	ft_putchar(a);
}
