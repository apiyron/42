/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:53:16 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/26 18:25:46 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*get_n(char **g)
{
	size_t	i;
	char	*str;
	char	*tmp;
	char	*tmp2;

	str = *g;
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	tmp = ft_strnew(i);
	tmp = ft_strncpy(tmp, str, i);
	tmp2 = ft_strnew(ft_strlen(&(str[i + 1])));
	tmp2 = ft_strncpy(tmp2, &str[i + 1], ft_strlen(&str[i]));
	free(*g);
	*g = tmp2;
	return (tmp);
}

int				get_next_line(const int fd, char **line)
{
	static char		*memory[12000];
	char			buff[BUFF_SIZE + 1];
	int				check;

	if (read(fd, buff, 0) < 0 || line == NULL)
		return (-1);
	while (ft_findchar(memory[fd], '\n') == 0)
	{
		check = read(fd, buff, BUFF_SIZE);
		buff[check] = '\0';
		if (check <= 0)
			break ;
		memory[fd] = ft_strjoinfree(memory[fd], buff);
	}
	if (ft_strlen(memory[fd]) || check > 0)
	{
		*line = get_n(&memory[fd]);
		return (1);
	}
	if (memory[fd])
	{
		free(memory[fd]);
		memory[fd] = NULL;
	}
	return (0);
}

int				main()
{
	printf("hi mark");
	return (0);
}