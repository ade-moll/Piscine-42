/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-moll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:57:19 by ade-moll          #+#    #+#             */
/*   Updated: 2021/02/02 09:25:09 by ade-moll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
{
		i++;
}
return (i);
}

char					*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		i;

	length = 0;
	i = 0;
	while (src[length] != '\0')
	{
		length++;
	}
dest = (char*)malloc(sizeof(*dest) * length + 1);
while (i < length)
{
	dest[i] = src[i];
	i++;
}
dest[i] = '\0';
return (dest);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

#include <unistd.h>
int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
}
