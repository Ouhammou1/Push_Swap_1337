/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:34:31 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:34:33 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_stack_b(int *arr, stack *a, stack *b, int len)
{
	int	min;
	int	max;
	int	indx;

	min = 0;
	max = 30;
	while (a->index != 0)
	{
		indx = ft_return_index(arr, len, a->tab[0]);
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

void	use_stack_a(stack *a, stack *b)
{
	int	len;
	int	y;

	while (b->index != 0)
	{
		len = b->index;
		y = ft_find_max(b, len);
		if (y <= len / 2)
		{
			while (y != 0)
			{
				rotate_b(b);
				y--;
			}
		}
		else
		{
			while (len - y != 0)
			{
				reverse_r_b(b);
				y++;
			}
		}
		push_in_a(a, b);
	}
}

void	ft_sort_stack(stack *a, int len)
{
	stack	*b;
	int		*arr;

	b = malloc(sizeof(stack));
	if (!b)
		return ;
	b->index = 0;
	b->tab = (int *)malloc(len * sizeof(int));
	if (!b->tab)
		return ;
	arr = ft_tab_indx(a, len);
	use_stack_b(arr, a, b, len);
	use_stack_a(a, b);
	free(arr);
	free_stack(b);
}
