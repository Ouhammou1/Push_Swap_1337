/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maiiin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:35:23 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:35:25 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_t_stack(t_stack *a)
{
	t_stack	*l;
	int		i;

	ft_putstr("\nElements of t_stack:\n");
	l = a;
	i = 0;
	while (i < l->index)
	{
		printf("%d          --->>>> index  = %d\n", l->tab[i], i);
		i++;
	}
}

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
