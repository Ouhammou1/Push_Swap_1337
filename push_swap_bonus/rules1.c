/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:56:58 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/13 11:57:00 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swaap/push_swap.h"
#include "push_swap_bonus.h"

void	b_push_in_b(t_stack *a, t_stack *b)
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
	b_staack_b(a);
	start = 0;
	end = b->index - 1;
	while (start < end)
	{
		temp = b->tab[start];
		b->tab[start] = b->tab[end];
		b->tab[end] = temp;
		start++;
	}
}

void	b_push_in_a(t_stack *a, t_stack *b)
{
	int	i;

	if (b == NULL || b->index == 0)
		return ;
	i = 0;
	b_staack_aaa(a);
	a->tab[i] = b->tab[i];
	b_staack_b(b);
}

//   ra (rotate a): Shift up all elements of t_stack a by
void	b_rotate_a(t_stack *a)
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
}

// rb (rotate b): Shift up all elements of t_stack b by 1.
void	b_rotate_b(t_stack *b)
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
}

void	b_reverse_r_a(t_stack *a)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = a->tab[a->index - 1];
	i = a->index - 1;
	while (i > 0)
	{
		a->tab[i] = a->tab[i - 1];
		i--;
	}
	a->tab[i] = tmp;
}
