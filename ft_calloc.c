/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 07:42:30 by jbetti-c          #+#    #+#             */
/*   Updated: 2020/02/13 13:06:46 by jbetti-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*result;

	if (!(result = malloc(size * number)))
		return (NULL);
	ft_bzero(result, number * size);
	return (result);
}
