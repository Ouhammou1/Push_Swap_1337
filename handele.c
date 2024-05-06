/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handele.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:35:01 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:35:04 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	error_syntax_pp(char *str)
{
	int	i;

	i = 0;
	if ((str[i] != '+' || str[i] != '-') && 
		(str[i + 1] <= '0' && str[i + 1] >= '9'))
	{
		return (1);
	}
	if ((str[i] == '+' || str[i] == '-') && 
		!(str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		return (1);
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	error_duplicate(stack *a, int nbr)
{
	int	len;
	int	i;

	len = stack_len(&a);
	i = 0;
	while (i < len)
	{
		if (a->tab[i] == nbr)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
