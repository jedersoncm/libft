/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 07:27:22 by jbetti-c          #+#    #+#             */
/*   Updated: 2020/02/10 14:10:05 by jbetti-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	if (!dest || !src)
		return (0);
	len = ft_strlen(src);
	if (!size)
		return (len);
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size < len)
		dest[size - 1] = '\0';
	else if (size != 0)
		dest[i] = '\0';
	return (len);
}
