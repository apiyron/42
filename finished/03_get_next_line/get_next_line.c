/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:52:48 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/06/07 09:29:40 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	next_line(int fd, char **line, char **tmp)
{
	char *buff4ik;

	if (ft_strchr(tmp[fd], '\n') != NULL)
	{
		*line = ft_strsub(tmp[fd], 0, \
		ft_strchr(tmp[fd], '\n') - (tmp[fd]));
		buff4ik = ft_strsub(tmp[fd], (ft_strchr(tmp[fd], '\n') - (tmp[fd])) \
		+ 1, ft_strlen(tmp[fd]) - (ft_strchr(tmp[fd], '\n') - (tmp[fd])));
		free(tmp[fd]);
		tmp[fd] = buff4ik;
		return (1);
	}
	if (ft_strchr(tmp[fd], '\n') == NULL)
	{
		*(line) = ft_strsub(tmp[fd], 0, ft_strlen(tmp[fd]));
		ft_strdel(&tmp[fd]);
		return (1);
	}
	return (1);
}

int	get_next_line(int fd, char **line)
{
	int			ret;
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	static char	*tmp_buff[MAX_FD];

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (tmp_buff[fd] == NULL)
			tmp_buff[fd] = ft_strnew(BUFF_SIZE);
		tmp = ft_strjoin(tmp_buff[fd], (char *)buff);
		free(tmp_buff[fd]);
		tmp_buff[fd] = tmp;
		if (ft_strchr(tmp_buff[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (tmp_buff[fd] == NULL || tmp_buff[fd][0] == '\0'))
		return (0);
	return (next_line(fd, line, tmp_buff));
}
