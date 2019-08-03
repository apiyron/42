/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 03:47:08 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/22 18:33:29 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*buff;
	char	*start_s2;

	buff = s1;
	while (*buff != '\0')
		buff++;
	start_s2 = buff;
	while (*s2 != '\0' && (buff - start_s2) < (int)n)
		*buff++ = *s2++;
	*buff = '\0';
	return (s1);
}
