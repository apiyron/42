/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtoend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 20:48:12 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/25 11:42:54 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddtoend(t_list **lst, t_list *new)
{
	t_list	*tmp;
	t_list	*head;

	if (lst != NULL && new != NULL)
	{
		tmp = *lst;
		head = tmp;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		*lst = head;
	}
}
