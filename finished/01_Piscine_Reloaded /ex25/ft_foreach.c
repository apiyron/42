/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 22:26:00 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/03 22:27:10 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int i;

	i = 0;
	if (tab && f)
	{
		i = 0;
		while (i < length)
		{
			f(tab[i]);
			i++;
		}
	}
}
