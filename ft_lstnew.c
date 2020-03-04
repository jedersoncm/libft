/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:53:57 by jbetti-c          #+#    #+#             */
/*   Updated: 2020/02/11 12:54:17 by jbetti-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*out;

	if (!(out = malloc(1 * sizeof(t_list))))
		return (NULL);
	out->content = content;
	out->next = NULL;
	return (out);
}
