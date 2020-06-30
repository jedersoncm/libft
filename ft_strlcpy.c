/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 11:12:44 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/30 16:46:51 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*aux;
	size_t		n;

	aux = src;
	n = dstsize;
	if (dst == src)
		return (0);
	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (dstsize != 0)
			*dst = '\0';
		while (*src)
			src++;
		src++;
	}
	return (src - aux - 1);
}
