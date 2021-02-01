/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-moll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 10:25:35 by ade-moll          #+#    #+#             */
/*   Updated: 2021/02/01 11:28:56 by ade-moll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_tailleglobale(char **strs, int size, char *sep)
{
	int i;
	int chaine;

	i = 0;
	chaine = 0;
	while (i < size)
	{
		chaine = chaine + ft_strlen(strs[i]);
		i++;
	}
	chaine = chaine + (size - 1) * ft_strlen(sep);
	return (chaine);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) + ft_tailleglobale(strs, size, sep));
	if (!(str = malloc(sizeof(char) + ft_tailleglobale(strs, size, sep))))
		return (NULL);
	i = 0;
	str[0] = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
