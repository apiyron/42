/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 00:46:16 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/22 18:26:10 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = -1;
	while (++i <= (ft_strlen(haystack) - ft_strlen(needle)))
	{
		j = -1;
		while (needle[++j])
		{
			if (haystack[i + j] != needle[j])
				break ;
		}
		if (j == ft_strlen(needle))
			return ((char *)(&haystack[i]));
	}
	return (NULL);
}
