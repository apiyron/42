/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 22:11:32 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/07/19 00:08:57 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

typedef struct	s_tetra {
	int			width;
	int			height;
	char		*pix;
}				t_tetra;

typedef struct	s_boundaries {
	int			left;
	int			top;
	int			right;
	int			bottom;
}				t_boundaries;

int				is_valid_tetra(char **arr);
void			validate_line(char *line, int line_num);
t_tetra			**read_file(int fd);
void			cut_rectangle(char **arr, t_tetra **t);
void			fillit(t_tetra **shapes);
int				insert_tetra(t_tetra *shape, int x, int y, char b);
void			ft_error();
#endif
