/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-moll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 12:36:31 by ade-moll          #+#    #+#             */
/*   Updated: 2021/01/28 16:22:41 by ade-moll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
}

int main()
{
	char chaine[] = "Salut";
	ft_putstr(chaine);
	return (0);
}
