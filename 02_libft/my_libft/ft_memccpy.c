/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 22:28:31 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/25 00:52:40 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*dest;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = -1;
	while (++i < n)
	{
		dest[i] = source[i];
		if ((char)source[i] == (char)c)
			return ((unsigned char *)(dest + i + 1));
	}
	return (NULL);
}