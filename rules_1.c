/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:35:55 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:35:57 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pb (push b): Take the first element at the top of a

void	push_in_b(stack *a, stack *b)
{
	int	i;
	int	start;
	int	end;
	int	temp;

	if (a == NULL || a->index == 0)
		return ;
	i = 0;
	b->tab[b->index] = a->tab[i];
	b->index++;
	staack_b(a);
	start = 0;
	end = b->index - 1;
	while (start < end)
	{
		temp = b->tab[start];
		b->tab[start] = b->tab[end];
		b->tab[end] = temp;
		start++;
	}
	ft_putstr("pb\n");
}

void	push_in_a(stack *a, stack *b)
{
	int	i;

	if (b == NULL || b->index == 0)
		return ;
	i = 0;
	staack_aaa(a);
	a->tab[i] = b->tab[i];
	staack_b(b);
	ft_putstr("pa\n");
}

//   ra (rotate a): Shift up all elements of stack a by
void	rotate_a(stack *a)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = a->tab[i];
	while (i < a->index - 1)
	{
		a->tab[i] = a->tab[i + 1];
		i++;
	}
	a->tab[i] = tmp;
	ft_putstr("ra\n");
}

// rb (rotate b): Shift up all elements of stack b by 1.
void	rotate_b(stack *b)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = b->tab[i];
	while (i < b->index - 1)
	{
		b->tab[i] = b->tab[i + 1];
		i++;
	}
	b->tab[i] = tmp;
	ft_putstr("rb\n");
}

// rr : ra and rb at the same time.

void	rr(stack *a, stack *b)
{
	rotate_a(a);
	rotate_b(b);
	ft_putstr("rr\n");
}
// rra (reverse rotate a): Shift down all elements of stack a by 1.
