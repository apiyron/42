/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 02:44:50 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/06/07 21:29:20 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	fresh = ft_strnew(s1_len + s2_len);
	if (!fresh)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < s1_len)
		*(fresh + i) = *(s1 + i);
	while (++j < s2_len)
		*(fresh + i++) = *(s2 + j);
	return (fresh);
}
