/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:29:03 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/07/21 19:30:55 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	*g_board[30];

int		main(int argc, char **argv)
{
	int		fd;
	t_tetra	**shapes;
	int		i;

	if (argc != 2)
	{
		write(1, "usage: ./fillit target_file\n", 28);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		ft_error();
	shapes = read_file(fd);
	fillit(shapes);
	i = 0;
	while (shapes[i])
	{
		free(shapes[i]->pix);
		free(shapes[i]);
		i++;
	}
	free(shapes);
	return (0);
}

void	clear_tetra(int x, int y, char b)
{
	int xx;
	int yy;

	xx = -1;
	while (++xx < 4 && x + xx < 30)
	{
		yy = -1;
		while (++yy < 4 && y + yy < 30)
			if (b == g_board[x + xx][y + yy])
				g_board[x + xx][y + yy] = '.';
	}
}

int		solve_tetra(t_tetra **shapes, int shape_i, int dim)
{
	int		x;
	int		y;
	t_tetra	*shape;
	char	b;

	x = 0;
	b = shape_i + 'A';
	shape = shapes[shape_i];
	if (!shape)
		return (1);
	while (x <= dim - shape->height)
	{
		y = -1;
		while (++y <= dim - shape->width)
			if (insert_tetra(shape, x, y, b))
			{
				if (solve_tetra(shapes, shape_i + 1, dim))
					return (1);
				else
					clear_tetra(x, y, b);
			}
		x++;
	}
	return (0);
}

int		insert_tetra(t_tetra *shape, int x, int y, char b)
{
	int		i;
	int		w;
	char	*p;

	i = -1;
	w = shape->width;
	p = shape->pix;
	while (++i < w * shape->height)
		if (p[i] == '#')
		{
			if (g_board[x + i / w][y + i % w] == '.')
				g_board[x + i / w][y + i % w] = b;
			else
			{
				while (--i >= 0)
					if (g_board[x + i / w][y + i % w] == b)
						g_board[x + i / w][y + i % w] = '.';
				return (0);
			}
		}
	return (1);
}

void	fillit(t_tetra **shapes)
{
	int		dim;
	int		i;
	int		pixels;

	i = 0;
	while (i < 30)
		g_board[i++] = ft_strdup("..............................");
	pixels = 0;
	while (shapes[pixels])
		pixels++;
	pixels *= 4;
	dim = 0;
	while (pixels > 0)
		pixels -= 2 * ++dim - 1;
	while (!solve_tetra(shapes, 0, dim))
		dim++;
	i = 0;
	while (i < dim)
	{
		write(1, g_board[i++], dim);
		write(1, "\n", 1);
	}
}
