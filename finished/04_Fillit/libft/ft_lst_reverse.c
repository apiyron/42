/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <mrhea-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 20:47:51 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/18 17:19:23 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_reverse(t_list *lst)
{
	t_list	*prev;
	t_list	*cur;
	t_list	*next;

	prev = NULL;
	if (!lst)
		return (lst);
	cur = lst;
	while (cur != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	lst = prev;
	return (lst);
}
