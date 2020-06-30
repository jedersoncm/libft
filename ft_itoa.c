/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:57:13 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/31 11:37:33 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_nchar(int n)
{
	int		nchar;

	nchar = 0;
	if (n < 0)
		nchar++;
	if (n == 0)
	{
		return (1);
	}
	while (n)
	{
		nchar++;
		n /= 10;
	}
	return (nchar);
}

char			*ft_itoa(int num)
{
	long	n;
	int		nchar;
	char	*resp;
	int		s;

	n = num;
	s = 1;
	nchar = ft_nchar(n);
	if (!(resp = malloc(nchar * sizeof(char))))
		return (0);
	if (n < 0)
	{
		s = 0;
		n = -n;
		resp[0] = '-';
	}
	s = nchar - 1;
	while (n)
	{
		resp[s--] = n % 10 + '0';
		n /= 10;
	}
	if (num == 0)
		resp[0] = '0';
	return (resp);
}
