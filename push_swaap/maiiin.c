/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maiiin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:35:23 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/28 20:37:44 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_staack(t_stack *a, int len)
{
	if (t_stack_test(a) == false)
	{
		if (t_stack_len(&a) == 2)
			swap_a(a);
		else if (t_stack_len(&a) == 3)
			sort_true(a);
		else if (t_stack_len(&a) == 4)
			sort_four(a, len);
		else if (t_stack_len(&a) == 5)
			sort_five(a, len);
		else if (t_stack_len(&a) <= 100)
			ft_range(a, len);
		else
			ft_sort_t_stack(a, len);
	}
	else
		return ;
}

int	main(int ac, char **av)
{
	t_stack	*a;
	int		len;

	a = NULL;
	len = counter(av);
	if (ac == 1)
		return (0);
	a = malloc(sizeof(t_stack));
	if (a == NULL)
		return (0);
	a->index = 0;
	a->tab = (int *)malloc(len * sizeof(int));
	if (a->tab == NULL)
		return (0);
	init_t_stack(a, av);
	ft_staack(a, len);
	free_t_stack(a);
	return (0);
}
