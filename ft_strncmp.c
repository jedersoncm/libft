/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:38:44 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/23 15:34:45 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *x1, const char *x2, size_t n)
{
	const unsigned char *s1;
	const unsigned char *s2;

	s1 = (const unsigned char*)x1;
	s2 = (const unsigned char*)x2;
	while (*s1 && *s2 && n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	if (n)
	{
		if (*s1 != '\0')
			return (*s1);
		if (*s2 != '\0')
			return (-*s2);
	}
	return (0);
}
