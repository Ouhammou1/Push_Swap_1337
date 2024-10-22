/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:35:13 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:35:15 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	ft_count_nbr(char **list)
{
	int	j;
	int	nbr;
	int	k;

	j = 0;
	nbr = 0;
	while (list[j])
	{
		k = 0;
		if (list[j][k] == '-' || list[j][k] == '+')
			k++;
		while (list[j][k])
		{
			if (!ft_isdigit(list[j][k]))
			{
				ft_putstr("Error\n");
				exit(1);
			}
			k++;
		}
		nbr++;
		j++;
	}
	return (nbr);
}

int	counter(char **av)
{
	int		i;
	int		count;
	char	**list;
	int		y;

	i = 1;
	count = 0;
	while (av[i] != NULL)
	{
		list = ft_split(av[i], ' ');
		y = ft_count_nbr(list);
		count = count + y;
		ft_free_list(list);
		i++;
	}
	return (count);
}

void	stock_nbr_ina(t_stack *a, char **list, int k)
{
	long long int	n;

	while (list[k])
	{
		if (error_syntax_pp(list[k]) == 1)
		{
			ft_putstr("Error\n");
			exit(1);
		}
		n = ft_atoi(list[k]);
		if (n > INT_MAX || n < INT_MIN)
		{
			ft_putstr("Error\n");
			exit(1);
		}
		a->tab[a->index] = n;
		if (error_duplicate(a, n) == 1)
		{
			ft_putstr("Error\n");
			exit(1);
		}
		a->index++;
		k++;
	}
}

void	init_t_stack(t_stack *a, char **av)
{
	int		i;
	char	**list;
	int		k;

	i = 1;
	while (av[i] != NULL)
	{
		k = 0;
		list = ft_split(av[i], ' ');
		stock_nbr_ina(a, list, k);
		ft_free_list(list);
		i++;
	}
}
