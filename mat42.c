/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat42.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:49:36 by smamba            #+#    #+#             */
/*   Updated: 2016/06/12 12:01:21 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat42.h"
#include <stdio.h>

static int		**make_2d_array(int r, int c, int dvalue)
{
	int	**arr;
	int	j;
	int	k;

	j = 0;
	if (!(arr = (int **)malloc(sizeof(int*) * r)))
		return (NULL);
	while (j < r)
	{
		k = 0;
		arr[j] = (int *)malloc(sizeof(int) * c + 1);
		if (arr[j] == NULL)
			return (NULL);
		while (k < c)
		{
			arr[j][k] = dvalue;
			k++;
		}
		j++;
	}
	return (arr);
}

t_matrix	*mat_create(int r, int c, int dvalue)
{
	t_matrix	*mat;

	mat = (t_matrix *)malloc(sizeof(t_matrix));
	if (!mat)
		return (NULL);
	mat->rows= r;
	mat->cols = c;
	if (!(mat->matrix = make_2d_array(r, c, dvalue)))
		return (NULL);
	return (mat);
}

void		mat_del(t_matrix	**mat)
{
	int	j;

	j = 0;
	while (j < (*mat)->rows)
	{
		free((*mat)->matrix[j]);
		j++;
	}
	free((*mat)->matrix);
	free(*mat);
	*mat = NULL;
}

void		mat_print(t_matrix *mat)
{
	int	r;
	int	c;

	r = 0;
	c = 0;
	while (r < mat->rows)
	{
		c = 0;
		while (c < mat->cols)
		{
			printf("%i ", mat->matrix[r][c]);
			c++;
		}
		printf("\n");
		r++;
	}
}

t_matrix	*mat_duplicate(t_matrix *mat)
{
	int			j;
	int			i;
	t_matrix	*res;

	res = mat_create(mat->rows, mat->cols, 0);
	i = 0;
	while (i < mat->rows)
	{
		j = 0;
		while (j < mat->cols)
		{
			res->matrix[i][j] = mat->matrix[i][j];
			j++;
		}
		i++;
	}
	return (res);
}
