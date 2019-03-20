/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 02:44:50 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/03/20 03:00:16 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!fresh)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < ft_strlen(s1))
		*(fresh + i) = *(s1 + i);
	while (++j < ft_strlen(s2))
		*(fresh + i++) = *(s2 + j);
	return (fresh);
}
