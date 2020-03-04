/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 07:35:14 by jbetti-c          #+#    #+#             */
/*   Updated: 2020/02/11 12:43:30 by jbetti-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ');
}

int				ft_atoi(const char *str)
{
	int			sign;
	long		nbr;
	long		tmp;

	sign = 1;
	while (ft_isspace(*str) && (str++ || 1))
		;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	nbr = 0;
	str -= 1;
	while (ft_isdigit((int)*++str) && ((tmp = nbr * 10 + *str - '0') || 1))
		if (tmp > 2147483648 && sign == -1)
			return (0);
		else if (tmp > 2147483647 && sign == 1)
			return (-1);
		else
			nbr = tmp;
	return (sign * nbr);
}
