/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:51:27 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/28 20:40:26 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swaap/push_swap.h"
#include "push_swap_bonus.h"

void	b_ss(t_stack *a, t_stack *b)
{
	b_swap_a(a);
	b_swap_b(b);
}

void	b_rr(t_stack *a, t_stack *b)
{
	b_rotate_a(a);
	b_rotate_b(b);
}

void	b_rrr(t_stack *a, t_stack *b)
{
	b_reverse_r_a(a);
	b_reverse_r_b(b);
}
