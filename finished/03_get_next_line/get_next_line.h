/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:53:45 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/05/26 15:55:41 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 100

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft/libft.h"

int	get_next_line(const int fd, char **line);

#endif
