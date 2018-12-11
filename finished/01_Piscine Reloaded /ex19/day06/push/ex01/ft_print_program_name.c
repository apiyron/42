/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 21:24:15 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/09/26 21:29:06 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, const char *argv[])
{
	int i;

	i = 0;
	while (argv[0][i++] != '\0')
	{
		ft_putchar(argv[0][i]);
	}
	ft_putchar('\0');
}
