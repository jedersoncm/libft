/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:55:37 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/27 15:57:40 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	int		i;
	int		pos;
	size_t	slen;

	pos = 0;
	i = 0;
	slen = ft_strlen(find);
	if (!*find)
		return ((char*)s);
	while (s[pos] != '\0' && pos + slen <= len)
	{
		i = 0;
		if (s[pos] == find[i])
		{
			while (find[i] != '\0' && s[pos + i] == find[i])
				i++;
			if (find[i] == '\0')
				return ((char *)s + pos);
		}
		pos++;
	}
	return (0);
}
