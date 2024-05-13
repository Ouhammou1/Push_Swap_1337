/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fouur.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:33:17 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:33:19 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	indice_min(t_stack *a, int taille)
{
	int	indx;
	int	i;

	indx = 0;
	i = 1;
	while (i < taille)
	{
		if (a->tab[i] < a->tab[indx])
		{
			indx = i;
		}
		i++;
	}
	return (indx);
}

void	sort_f(t_stack *a, t_stack *b, int indx)
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

void	sort_four(t_stack *a, int len)
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
	sort_f(a, b, indx);
	if (t_stack_test(a) == false)
	{
		sort_true(a);
	}
	push_in_a(a, b);
	free_t_stack(b);
}
