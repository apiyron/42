/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 22:49:14 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/25 13:26:51 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char				*fresh;
	unsigned long int	max_size_t;

	max_size_t = 18374686479671623680U;
	if (size == max_size_t)
		return (NULL);
	if (!(fresh = (char *)ft_memalloc(size + 1)))
		return (NULL);
	return (fresh);
}
