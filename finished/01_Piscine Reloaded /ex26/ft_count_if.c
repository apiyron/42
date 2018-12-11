/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 22:32:13 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/06 18:46:02 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int count;

	count = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
		{
			count++;
		}
		tab++;
	}
	return (count);
}