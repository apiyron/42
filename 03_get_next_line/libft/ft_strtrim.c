/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 03:01:19 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/03/20 03:42:21 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*fresh;
	unsigned int	start;
	size_t			end;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
		i++;
	if (s[i] == '\0')
		return (ft_strnew(0));
	start = i;
	i = ft_strlen(s) - 1;
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
		i--;
	end = i;
	fresh = ft_strsub(s, start, end - start + 1);
	if (!fresh)
		return (NULL);
	return (fresh);
}
