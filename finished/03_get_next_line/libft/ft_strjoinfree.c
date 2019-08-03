/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoinfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 17:42:40 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/26 17:44:14 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char *s2)
{
	char	*str_new;
	size_t	len_s1;
	size_t	len_s2;
	int		i;

	i = 0;
	if (s1 != NULL)
		len_s1 = ft_strlen(s1);
	else
		len_s1 = 0;
	if (s2 != NULL)
		len_s2 = ft_strlen(s2);
	else
		len_s2 = 0;
	str_new = ft_strnew(len_s1 + len_s2);
	if (str_new == NULL)
		return (NULL);
	ft_strncat(str_new, s1, len_s1);
	ft_strncat(str_new, s2, len_s2);
	free(s1);
	s1 = NULL;
	return (str_new);
}
