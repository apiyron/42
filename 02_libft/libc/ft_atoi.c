/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caking <caking@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 07:27:59 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/14 22:03:49 by caking           ###   ########.fr       */
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
		return (-num);
	return (num);
}
