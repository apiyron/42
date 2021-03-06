/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 20:48:41 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/25 13:08:08 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	lstfree(t_list *head)
{
	t_list	*temp;

	while (head)
	{
		temp = head;
		temp->content = head->content;
		head = head->next;
		free(temp->content);
		free(temp);
		temp = NULL;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*head;

	if (lst == NULL || f == NULL)
		return (NULL);
	temp = f(lst);
	head = temp;
	lst = lst->next;
	while (lst)
	{
		temp->next = f(lst);
		if (temp->next == NULL)
		{
			lstfree(head);
			return (NULL);
		}
		lst = lst->next;
		temp = temp->next;
	}
	return (head);
}
