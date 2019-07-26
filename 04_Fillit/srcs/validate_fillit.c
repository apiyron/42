/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_fillit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:59:38 by mrhea-ro          #+#    #+#             */
/*   Updated: 2019/07/22 00:18:45 by mrhea-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

t_tetra	**read_file(int fd)
{
	char			*line;
	int				line_num;
	char			*arr[4];
	t_tetra			**shapes;
	int				i;

	i = -1;
	shapes = ft_memalloc(sizeof(t_tetra*) * 30);
	line_num = 1;
	while ((ft_get_next_line(fd, &line)) == 1)
	{
		validate_line(line, line_num);
		if (line_num % 5)
			arr[(line_num % 5) - 1] = line;
		if (line_num % 5 == 4)
		{
			if (is_valid_tetra(arr) == 0)
				ft_error();
			cut_rectangle(arr, shapes);
		}
		line_num++;
	}
	free(arr[0]);
	free(arr[1]);
	free(arr[2]);
	free(arr[3]);
	if (line_num % 5 != 0)
		ft_error();
	return (shapes);
}

void	validate_line(char *line, int line_num)
{
	int	line_len;

	line_len = (int)ft_strlen(line);
	if ((line_num % 5) > 0 && line_len != 4)
		ft_error();
	else if ((line_num % 5) == 0 && line_len != 0)
		ft_error();
}

int		is_valid_tetra(char **arr)
{
	int i;
	int j;
	int acc;
	int pix_acc;

	acc = 0;
	pix_acc = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			pix_acc += arr[i][j] == '#';
			if (arr[i][j] != '.' && arr[i][j] != '#')
				return (0);
			if (arr[i][j] == '.')
				continue;
			acc += i > 0 && arr[i - 1][j] == '#';
			acc += i < 3 && arr[i + 1][j] == '#';
			acc += j > 0 && arr[i][j - 1] == '#';
			acc += j < 3 && arr[i][j + 1] == '#';
		}
	}
	return (acc >= 6 && pix_acc == 4);
}

void	find_boundaries(char **arr, t_boundaries *boundaries)
{
	int i;
	int j;

	i = -1;
	boundaries->top = 3;
	boundaries->left = 3;
	boundaries->bottom = 0;
	boundaries->right = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (arr[i][j] == '#' && i < boundaries->top)
				boundaries->top = i;
			if (arr[i][j] == '#' && i > boundaries->bottom)
				boundaries->bottom = i;
			if (arr[i][j] == '#' && j < boundaries->left)
				boundaries->left = j;
			if (arr[i][j] == '#' && j > boundaries->right)
				boundaries->right = j;
		}
	}
}

void	cut_rectangle(char **arr, t_tetra **t)
{
    t_boundaries	boundaries;
    int				i;
    int				j;
    int				k;
    t_tetra 	*temp;

    find_boundaries(arr, &boundaries);
    temp = *t;
    while (temp)
        temp++;
    free(temp);
    *t = malloc(sizeof(t_tetra));
    (*t)->height = boundaries.bottom - boundaries.top + 1;
    (*t)->width = boundaries.right - boundaries.left + 1;
    (*t)->pix = ft_strnew(6);
    i = boundaries.top;
    k = 0;
    while (i <= boundaries.bottom)
    {
        j = boundaries.left - 1;
        while (++j <= boundaries.right)
            (*t)->pix[k++] = arr[i][j];
        i++;
    }
}
