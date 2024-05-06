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

void	sort_stack(stack *a, stack *b, int indx)
{
	int	len;

	len = stack_len(&a);
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

void	sort_five(stack *a, int len)
{
	stack	*b;
	int		indx;

	b = malloc(sizeof(stack));
	if (!b)
		return ;
	b->index = 0;
	b->tab = (int *)malloc(len * sizeof(int));
	if (!b->tab)
		return ;
	indx = indice_min(a, len);
	sort_stack(a, b, indx);
	if (stack_test(a) == false)
	{
		sort_four(a, len);
	}
	push_in_a(a, b);
	free_stack(b);
}
