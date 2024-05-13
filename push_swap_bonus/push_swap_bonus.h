/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:56:45 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/13 11:56:49 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../push_swaap/push_swap.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	b_push_in_b(t_stack *a, t_stack *b);
void	b_push_in_a(t_stack *a, t_stack *b);
void	b_rotate_a(t_stack *a);
void	b_rotate_b(t_stack *b);
void	b_reverse_r_a(t_stack *a);

void	b_staack_b(t_stack *a);
void	b_staack_aaa(t_stack *a);
void	b_swap_a(t_stack *a);
void	b_swap_b(t_stack *b);
void	b_reverse_r_b(t_stack *b);

int		ft_strcmp(char *s1, char *s2);
void	check_rues(t_stack *a, t_stack *b, char *str);
void	get_line(t_stack *a, int len);

#endif
