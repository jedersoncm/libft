/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 07:22:51 by jbetti-c          #+#    #+#             */
/*   Updated: 2020/02/04 18:29:27 by jbetti-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	chr;

	i = 0;
	ptr = (unsigned char*)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (*ptr == chr)
			return (ptr);
		i++;
		ptr++;
	}
	return (NULL);
}
