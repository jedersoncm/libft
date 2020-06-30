/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:33:43 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/31 12:05:20 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*resp;
	int		i;

	i = 0;
	if (!(resp = malloc((len + 1) * sizeof(char))))
		return (NULL);
	resp[len] = '\0';
	while (len > 0 && s[start + i] != '\0')
	{
		resp[i] = s[start + i];
		i++;
		len--;
	}
	return (resp);
}
