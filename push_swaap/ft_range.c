/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:34:10 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:34:14 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_t_stack__bb(int *rr, t_stack *a, t_stack *b, int len)
{
	int	min;
	int	max;
	int	indx;

	min = 0;
	max = 15;
	while (a->index != 0)
	{
		indx = ft_return_index(rr, len, a->tab[0]);
		if (indx >= min && indx <= max)
		{
			push_in_b(a, b);
			min++;
			max++;
		}
		else if (indx > max)
			rotate_a(a);
		else
		{
			push_in_b(a, b);
			rotate_b(b);
			min++;
			max++;
		}
	}
}

void	ft_range(t_stack *a, int len)
{
	t_stack	*b;
	int		*rr;

	b = malloc(sizeof(t_stack));
	if (!b)
		return ;
	b->index = 0;
	b->tab = (int *)malloc(len * sizeof(int));
	if (!b->tab)
		return ;
	rr = ft_tab_indx(a, len);
	use_t_stack__bb(rr, a, b, len);
	use_t_stack_a(a, b);
	free_t_stack(b);
	free(rr);
}
