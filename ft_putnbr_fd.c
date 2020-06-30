/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 10:03:24 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/01/24 11:25:44 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char			a;
	unsigned int	aux;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		aux = n * -1;
	}
	else
		aux = n;
	if (aux >= 10)
		ft_putnbr_fd(aux / 10, fd);
	a = (aux % 10) + 48;
	ft_putchar_fd(a, fd);
}
