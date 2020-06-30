/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:03:00 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/31 12:37:24 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *aux1;
	unsigned char *aux2;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	while (n--)
	{
		if (*aux1 == *aux2)
		{
			++aux1;
			++aux2;
		}
		else
			return (*aux1 - *aux2);
	}
	return (0);
}
