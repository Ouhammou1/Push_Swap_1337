/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:57:08 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/13 11:57:10 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line/get_next_line.h"
#include "../push_swaap/push_swap.h"
#include "push_swap_bonus.h"

void	print_t_stack(t_stack *a)
{
	t_stack	*l;
	int		i;

	ft_putstr("\nElements of t_stack:\n");
	l = a;
	i = 0;
	while (i < l->index)
	{
		printf("%d         			--->>>> index  = %d\n", l->tab[i], i);
		i++;
	}
}

void	check_rues(t_stack *a, t_stack *b, char *str)
{
	if (ft_strcmp(str, "pb\n") == 0)
		b_push_in_b(a, b);
	else if (ft_strcmp(str, "pa\n") == 0)
		b_push_in_a(a, b);
	else if (ft_strcmp(str, "ra\n") == 0)
		b_rotate_a(a);
	else if (ft_strcmp(str, "rb\n") == 0)
		b_rotate_b(b);
	else if (ft_strcmp(str, "rra\n") == 0)
		b_reverse_r_a(a);
	else if (ft_strcmp(str, "rrb\n") == 0)
		b_reverse_r_b(b);
	else if (ft_strcmp(str, "sa\n") == 0)
		b_swap_a(a);
	else if (ft_strcmp(str, "sb\n") == 0)
		b_swap_b(b);
	else if (ft_strcmp(str, "rrr\n") == 0 || ft_strcmp(str, "rr\n") == 0
		|| ft_strcmp(str, "ss\n") == 0)
		ft_putstr("");
	else
	{
		ft_putstr("Error\n");
		exit(0);
	}
}

void	get_line(t_stack *a, int len)
{
	t_stack	*b;
	char	*str;

	b = malloc(sizeof(t_stack));
	if (b == NULL)
		return ;
	b->index = 0;
	b->tab = (int *)malloc(len * sizeof(int));
	if (b->tab == NULL)
		return ;
	str = get_next_line(0);
	while (str != NULL)
	{
		check_rues(a, b, str);
		str = get_next_line(0);
	}
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
	get_line(a, len);
	if (t_stack_test(a) == false)
		ft_putstr("KO\n");
	if (t_stack_test(a) == true)
		ft_putstr("OK\n");
	free_t_stack(a);
	return (0);
}
