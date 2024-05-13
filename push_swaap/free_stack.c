/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_satck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:33:27 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:33:30 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_t_stack(t_stack *s)
{
	if (s == NULL)
	{
		return ;
	}
	free(s->tab);
	free(s);
}

void	ft_free_list(char **list)
{
	int	i;

	i = 0;
	while (list[i] != NULL)
	{
		free(list[i]);
		i++;
	}
	free(list);
}
