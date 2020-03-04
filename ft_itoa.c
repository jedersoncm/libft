/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 08:07:54 by jbetti-c          #+#    #+#             */
/*   Updated: 2020/01/28 18:07:51 by jbetti-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_digitlen(long number)
{
	size_t	size;

	if (number == 0)
		return (number + 1);
	size = 0;
	if (number < 0)
	{
		number = -number;
		size++;
	}
	while (number != 0)
	{
		number /= 10;
		size++;
	}
	return (size);
}

static int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	long	long_n;
	long	longueur;
	char	*fresh;

	long_n = n;
	longueur = ft_digitlen(long_n);
	if (longueur == 0)
		longueur = 1;
	fresh = (char *)malloc((longueur + 1) * sizeof(char));
	if (!fresh)
		return (NULL);
	fresh[longueur] = '\0';
	longueur--;
	if (long_n < 0)
		long_n = -long_n;
	while (longueur >= 0)
	{
		fresh[longueur] = (long_n % 10) + '0';
		longueur--;
		long_n /= 10;
	}
	if (ft_sign(n))
		fresh[0] = '-';
	return (fresh);
}
