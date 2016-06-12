/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 10:42:20 by smamba            #+#    #+#             */
/*   Updated: 2016/06/12 12:08:27 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "mat42.h"

int main()
{
    t_matrix    *matrix;
	t_matrix	*mat;
	
	matrix = mat_create(3, 4, -2);
	mat = mat_create(3, 4, 4);

	mat_print(matrix);
	printf("\n");
	mat_print(mat);
	
	mat_del(&matrix);
	mat_del(&mat);
    return (0);
}
