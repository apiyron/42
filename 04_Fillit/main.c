/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 23:00:49 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/06/21 23:56:59 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int fd;
	
	fd = open(argv[1], O_RDONLY);
	char c;
	read(fd, &c, 1);
	printf("%d", c);
	return 0;
}
