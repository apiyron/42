/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <mrhea-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 04:07:23 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/02/28 22:54:41 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (haystack[++i] != '\0' && i <= len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] &&\
			needle[j] != '\0' && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
	}
	return (NULL);
}
