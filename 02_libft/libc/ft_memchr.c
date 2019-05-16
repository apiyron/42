/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 10:45:32 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/25 19:14:06 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*buff4ik;

	buff4ik = s;
	i = -1;
	while (++i < n)
		if (buff4ik[i] == (char)c)
			return ((void *)(s + i));
	return (NULL);
}
