/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:52:20 by mrhea-ro          #+#    #+#             */
/*   Updated: 2018/12/06 18:28:55 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

int		open_file(char *filename)
{
	int f;

	f = open(filename, O_RDONLY);
	if (f < 0)
		return (-1);
	return (0);
}

void	print_file(char *filename)
{
	int		f;
	char	c;

	f = open(filename, O_RDONLY);
	while (read(f, &c, 1))
		write(1, &c, 1);
	close(f);
}

int		main(int argc, char *argv[])
{
	if (argc <= 1)
		write(1, "File name missing.\n", 19);
	else if (argc >= 3)
		write(1, "Too many arguments.\n", 20);
	else
	{
		if (open_file(argv[1]) == -1)
			return (0);
		else
			print_file(argv[1]);
	}
	return (0);
}
