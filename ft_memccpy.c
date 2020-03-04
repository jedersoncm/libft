/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 07:21:23 by jbetti-c          #+#    #+#             */
/*   Updated: 2020/02/05 13:37:36 by jbetti-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned char	chr;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	chr = (unsigned char)c;
	while (i < n)
	{
		*p1 = p2[i];
		p1++;
		if (chr == p2[i])
		{
			return (p1);
		}
		i++;
	}
	return (NULL);
}
