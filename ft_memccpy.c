/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:20:16 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/31 13:03:33 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *aux1;
	unsigned char *aux2;

	aux1 = (unsigned char *)dst;
	aux2 = (unsigned char *)src;
	while (n--)
	{
		if ((*aux1 = *aux2) == (unsigned char)c)
			return (aux1 + 1);
		++aux1;
		++aux2;
	}
	return (NULL);
}
