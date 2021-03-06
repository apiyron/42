/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 09:36:33 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/19 19:48:49 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define LLONG_MAX	9223372036854775807
#define TRUE		1
#define FALSE		0
#define NOT_PRINTED(x) (x == '\v' || x == '\f' || x == '\r')

int	ft_atoi(const char *s)
{
	int					i;
	int					is_neg;
	unsigned long long	num;

	i = 0;
	is_neg = FALSE;
	num = 0;
	while (NOT_PRINTED(s[i]) || s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '-')
		is_neg = TRUE;
	if ((s[i] == '-') || (s[i] == '+'))
		i++;
	while (ft_isdigit(s[i]))
		num = (10 * num) + ((int)s[i++] - '0');
	if (num > LLONG_MAX && !(is_neg))
		return (-1);
	if (num > LLONG_MAX && is_neg)
		return (0);
	if (is_neg)
		return (-(int)num);
	return (num);
}
