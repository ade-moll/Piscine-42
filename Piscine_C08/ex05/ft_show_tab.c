/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-moll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 09:13:25 by ade-moll          #+#    #+#             */
/*   Updated: 2021/02/02 09:29:24 by ade-moll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
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

void	ft_show_tab(struct s_stock_str	*par)
{
	int i;

	i = 0;
	while (par[i].str != '\0')
	{
	ft_putstr(par[i].str);
	ft_putchar('\n');
	ft_putnbr(par[i].size);
	ft_putchar('\n');
	ft_putstr(par[i].copy);
	ft_putchar('\n');
	i++;
	}
}
