/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 14:20:14 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/31 13:08:46 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen1(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int		verificar(char c, const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*resp;
	int		k;

	i = 0;
	while (verificar(s1[i], set) != 1)
		i++;
	j = ft_strlen1(s1) - 1;
	while (verificar(s1[j], set) != 1)
		j--;
	if (j >= i)
	{
		if (!(resp = malloc((j - i + 1) * sizeof(s1))))
			return (NULL);
		k = 0;
		while (i <= j)
			resp[k++] = s1[i++];
		resp[k] = '\0';
		return (resp);
	}
	resp = malloc(1);
	*resp = '\0';
	return (resp);
}
