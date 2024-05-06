/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:36:13 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:36:14 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	staack_b(stack *a)
{
	int	i;

	i = 0;
	while (i < a->index - 1)
	{
		a->tab[i] = a->tab[i + 1];
		i++;
	}
	a->index--;
}

void	staack_aaa(stack *a)
{
	int	i;

	i = a->index;
	while (i > 0)
	{
		a->tab[i] = a->tab[i - 1];
		i--;
	}
	a->index++;
}

// sa  (swap a): Swap the first 2 elements at the top of stack a.
void	swap_a(stack *a)
{
	int	i;
	int	temp;

	if (!a || a->index < 2)
	{
		return ;
	}
	i = 0;
	temp = a->tab[i];
	a->tab[i] = a->tab[i + 1];
	a->tab[i + 1] = temp;
	ft_putstr("sa\n");
}

// sb (swap b): Swap the first 2 elements at the top of stack b
void	swap_b(stack *b)
{
	int	i;
	int	temp;

	if (!b || b->index < 2)
	{
		return ;
	}
	i = 0;
	temp = b->tab[i];
	b->tab[i] = b->tab[i + 1];
	b->tab[i + 1] = temp;
	ft_putstr("sb\n");
}
// ss : sa and sb at the same time.

void	ss(stack *a, stack *b)
{
	swap_a(a);
	swap_b(b);
	ft_putstr("ss\n");
}
