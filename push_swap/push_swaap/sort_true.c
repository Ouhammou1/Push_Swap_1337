/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_true.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:36:36 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:36:38 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_true(t_stack *a)
{
	int	x;
	int	y;
	int	z;

	x = a->tab[0];
	y = a->tab[1];
	z = a->tab[2];
	if (x > y && z > x)
		swap_a(a);
	else if (x > y && y > z)
	{
		swap_a(a);
		reverse_r_a(a);
	}
	else if (x > y && z > y)
		rotate_a(a);
	else if (x < y && z < x)
		reverse_r_a(a);
	else
	{
		swap_a(a);
		rotate_a(a);
	}
}
