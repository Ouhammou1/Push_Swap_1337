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

void	stock_nbr_ina(stack *a, char **list, int indx)
{
	int				k;
	long long int	n;

	k = 0;
	while (list[k])
	{
		if (error_syntax_pp(list[k]) == 1)
		{
			ft_putstr("1Errlor\n");
			exit(1);
		}
		n = ft_atoi(list[k]);
		if (n > INT_MAX || n < INT_MIN)
		{
			ft_putstr("2Error\n");
			exit(1);
		}
		a->tab[indx] = n;
		// if (error_duplicate(a, n))
		// {
		// 	ft_putstr("3Error\n");
		// 	exit(1);
		// }
		a->index++;
		k++;
	}
}

void	init_stack(stack *a, char **av)
{
	int		i;
	char	**list;
	int		indx;

	i = 1;
	indx = 0;
	while (av[i] != NULL)
	{
		list = ft_split(av[i], ' ');
		stock_nbr_ina(a, list, indx);
		ft_free_list(list);
		i++;
		indx++;
	}
}
