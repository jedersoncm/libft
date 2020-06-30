/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 09:35:40 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/31 12:36:47 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char *aux;

	aux = (unsigned char *)src;
	while (n--)
	{
		if (*aux == (unsigned char)c)
			return (aux);
		++aux;
	}
	return (NULL);
}
