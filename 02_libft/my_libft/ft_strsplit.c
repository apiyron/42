/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 03:44:38 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/03/20 04:07:48 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		start;
	int		end;

	i = 0;
	j = 0;
	arr = NULL;
	if (!s || !c)
		return (NULL);
	while (s[j])
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		end = j;
		arr[i] = ft_strsub(s, start, end - start + 1);
		i++;
	}
	return (arr);
}
