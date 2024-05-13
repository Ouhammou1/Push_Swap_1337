/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:59:46 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/13 11:59:47 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swaap/push_swap.h"
#include "push_swap_bonus.h"

void	b_staack_b(t_stack *a)
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

void	b_staack_aaa(t_stack *a)
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

// sa  (swap a): Swap the first 2 elements at the top of t_stack a.
void	b_swap_a(t_stack *a)
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
}

// sb (swap b): Swap the first 2 elements at the top of t_stack b
void	b_swap_b(t_stack *b)
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
}

void	b_reverse_r_b(t_stack *b)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = b->tab[b->index - 1];
	i = b->index - 1;
	while (i > 0)
	{
		b->tab[i] = b->tab[i - 1];
		i--;
	}
	b->tab[i] = tmp;
}
