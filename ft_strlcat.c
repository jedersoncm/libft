/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:18:06 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/31 12:39:57 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static int	ft_strlenconst(const char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t		ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t pos;
	size_t posf;

	pos = ft_strlen(dst);
	posf = ft_strlen(dst) + ft_strlenconst(src);
	if (len <= pos)
		return (ft_strlenconst(src) + len);
	len--;
	while (pos < len && *src)
	{
		dst[pos++] = *src;
		src++;
	}
	dst[pos] = 0;
	return (posf);
}
