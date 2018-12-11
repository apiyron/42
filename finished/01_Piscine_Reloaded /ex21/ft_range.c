/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 19:16:21 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/03 19:16:23 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	if (min >= max)
		return (0);
	array = (int*)malloc(sizeof(int*) * (max - min));
	i = 0;
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
