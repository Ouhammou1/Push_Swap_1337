/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:36:06 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:36:08 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_r_a(stack *a)
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
	ft_putstr("rra\n");
}

void	reverse_r_b(stack *b)
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
	ft_putstr("rrb\n");
}

void	rrr(stack *a, stack *b)
{
	reverse_r_a(a);
	reverse_r_b(b);
	ft_putstr("rrr\n");
}
