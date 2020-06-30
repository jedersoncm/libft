/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 17:47:30 by jcarvalh          #+#    #+#             */
/*   Updated: 2020/02/03 15:37:27 by jcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *list)
{
	int i;

	i = 0;
	while (list)
	{
		list = (*list).next;
		i++;
	}
	return (i);
}