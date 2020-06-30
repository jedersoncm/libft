/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:10:29 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/31 13:27:11 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	nstr(char const *s, char c)
{
	int i;
	int cont;

	cont = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cont++;
		i++;
	}
	return (cont);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		cont;
	int		k;
	char	**result;

	cont = nstr(s, c);
	if (!(result = (char **)malloc((cont + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	cont = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			k = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			result[cont++] = ft_substr(s, k, (i - k));
		}
		else
			i++;
	}
	result[cont] = 0;
	return (result);
}
