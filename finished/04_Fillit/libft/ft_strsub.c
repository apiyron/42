/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 02:30:27 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/03/20 02:42:33 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*fresh;

	if (!s)
		return (NULL);
	fresh = ft_strnew(len);
	if (!fresh)
		return (NULL);
	i = -1;
	while (++i < len)
		fresh[i] = s[start + i];
	return (fresh);
}
