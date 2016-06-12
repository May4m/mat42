/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat42.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:14:20 by smamba            #+#    #+#             */
/*   Updated: 2016/06/12 12:00:20 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT42_H
# define MAT42_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_matrix
{
	int	cols;
	int	rows;
	int	**matrix;
}				t_matrix;

t_matrix		*mat_create(int x, int y, int dvalue);
t_matrix		*mat_duplicate(t_matrix *s);
t_matrix		*mat_add(t_matrix *m1, t_matrix *m2);
void			mat_del(t_matrix	**matrix);
void			mat_print(t_matrix *mat);

#endif
