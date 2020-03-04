/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbetti-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:55:40 by jbetti-c          #+#    #+#             */
/*   Updated: 2020/02/11 12:55:44 by jbetti-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		list = ft_lstlast(*lst);
		list->next = new;
	}
}
