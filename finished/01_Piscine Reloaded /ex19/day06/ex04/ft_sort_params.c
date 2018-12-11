/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:00:17 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/03 18:03:46 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int i;
	int k;

	i = 0;
	k = 1;
	while (i++ < (argc - 1))
	{
		k = i;
		while (k++ < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[k]) > 0)
			{
				ft_swap(&argv[i], &argv[k]);
			}
		}
	}
	i = 0;
	while (i++ < (argc - 1))
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
