/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 07:27:59 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/22 08:34:12 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LLONG_MAX	9223372036854775807
#define TRUE		1
#define FALSE		0

int	ft_atoi(const char *str)
{
	int					i;
	int					is_neg;
	unsigned long long	num;

	i = 0;
	is_neg = FALSE;
	num = 0;
	while (IS_NOT_PRINTED(str[i]) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		is_neg = TRUE;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (ft_isdigit(str[i]))
		num = (10 * num) + ((int)str[i++] - '0');
	if (num > LLONG_MAX && !(is_neg))
		return (-1);
	if (num > LLONG_MAX && is_neg)
		return (0);
	if (is_neg)
		return (-num);
	return (num);
}
