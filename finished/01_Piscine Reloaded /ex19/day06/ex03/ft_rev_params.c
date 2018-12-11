/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 21:28:12 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/09/26 21:28:19 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, const char *argv[])
{
	int i;
	int j;

	while (argc-- > 1)
	{
		j = 0;
		while (argv[argc][j] != '\0')
		{
			ft_putchar(argv[argc][j]);
			j++;
		}
		ft_putchar('\n');
	}
}
