/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:53:45 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/07/13 22:18:35 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H

# define FT_GET_NEXT_LINE_H
# define BUFF_SIZE 50000
# define MAX_FD 255

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

int	ft_get_next_line(const int fd, char **line);

#endif
