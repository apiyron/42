/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 23:00:49 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/06/22 00:30:36 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int fd;
	
	if (argc != 2)
	{
		write(1, "usage: ./fillit target_file\n", 28);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	char c, c_prev;
	int line_len = 0;
	while (read(fd, &c, 1) > 0)
	{
		if (line_len > 4)
		{
			write(1, "error\n", 6);
			return (0);
		}
		if (c == '\n')
		{
			printf("%d\n", line_len);
			line_len = -1;
		}
		line_len++;
	}
	return 0;
}
