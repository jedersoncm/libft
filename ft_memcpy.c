/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:24:47 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/31 13:04:08 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	int			k;
	const char	*o;
	char		*d;

	o = src;
	d = dst;
	if (dst == src)
		return (NULL);
	i = 0;
	k = n;
	while (i < k)
	{
		d[i] = o[i];
		i++;
	}
	return (dst);
}
