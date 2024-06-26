/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack_test.c                                       :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:36:56 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:36:58 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	t_stack_test(t_stack *a)
{
	int	i;

	if (!a)
	{
		exit(0);
	}
	i = 0;
	while (i < a->index - 1)
	{
		if (a->tab[i] > a->tab[i + 1])
		{
			return (false);
		}
		i++;
	}
	return (true);
}

int	t_stack_len(t_stack **a)
{
	return ((*a)->index);
}
