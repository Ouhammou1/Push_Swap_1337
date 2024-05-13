/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:36:25 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:36:26 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_t_stack(t_stack *a, t_stack *b, int indx)
{
	int	len;

	len = t_stack_len(&a);
	if (indx <= len / 2)
	{
		while (indx != 0)
		{
			rotate_a(a);
			indx--;
		}
	}
	else
	{
		while (len - indx != 0)
		{
			reverse_r_a(a);
			indx++;
		}
	}
	push_in_b(a, b);
}

void	sort_five(t_stack *a, int len)
{
	t_stack	*b;
	int		indx;

	b = malloc(sizeof(t_stack));
	if (!b)
		return ;
	b->index = 0;
	b->tab = (int *)malloc(len * sizeof(int));
	if (!b->tab)
		return ;
	indx = indice_min(a, len);
	sort_t_stack(a, b, indx);
	if (t_stack_test(a) == false)
	{
		sort_four(a, len);
	}
	push_in_a(a, b);
	free_t_stack(b);
}
