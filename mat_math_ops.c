/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_math_ops.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 11:51:07 by smamba            #+#    #+#             */
/*   Updated: 2016/06/12 12:16:00 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat42.h"

t_matrix	*mat_add(t_matrix *m1, t_matrix *m2)
{
	int			j;
	int			i;
	t_matrix	*sum;

	i = 0;
	if (m1->cols != m2->cols || m1->rows != m2->rows)
		return (NULL);
	sum = mat_duplicate(m1);
	while (i < sum->rows)
	{
		j = 0;
		while (j < sum->cols)
		{
			sum->matrix[i][j] += m2->matrix[i][j];
			j++;
		}
		i++;
	}
	return (sum);
}

t_matrix	*mat_multiply(t_matrix *m1, t_matrix *m2);
