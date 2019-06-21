/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 12:10:51 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/25 13:34:31 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_list *head)
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
