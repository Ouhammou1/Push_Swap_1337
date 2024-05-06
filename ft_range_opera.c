/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_opera.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:33:56 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:33:58 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_tab(int *arr, int len)
{
	int	j;
	int	temp;
	int	i;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			temp = arr[i];
			if (temp > arr[j])
			{
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	*ft_tab_indx(stack *a, int len)
{
	int	*arr;
	int	i;

	arr = (int *)malloc(len * sizeof(int));
	if (arr == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		arr[i] = a->tab[i];
		i++;
	}
	ft_sort_tab(arr, len);
	return (arr);
}

int	ft_return_index(int *arr, int len, int data)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] == data)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	ft_find_max(stack *b, int len)
{
	int	i;
	int	tab[len];
	int	max_nbr;
	int	max_index;

	i = 0;
	while (i < len)
	{
		tab[i] = b->tab[i];
		i++;
	}
	max_nbr = tab[0];
	max_index = 0;
	i = 1;
	while (i < len)
	{
		if (tab[i] > max_nbr)
		{
			max_nbr = b->tab[i];
			max_index = i;
		}
		i++;
	}
	return (max_index);
}
