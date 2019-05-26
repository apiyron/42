/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 08:38:56 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/23 21:58:41 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	int				i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst > src)
		while (len-- > 0)
			*(dest + len) = *(source + len);
	else
		while (++i < (int)len)
			*(dest + i) = *(source + i);
	return (dst);
}
