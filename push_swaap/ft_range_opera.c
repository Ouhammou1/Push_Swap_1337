/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_opera.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:33:56 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/26 19:48:49 by bouhammo         ###   ########.fr       */
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

int	*ft_tab_indx(t_stack *a, int len)
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

int	ft_find_max(t_stack *b, int len)
{
	int	i;
	int	*arr;
	int	tmp;
	int	x;

	arr = (int *)malloc(len * sizeof(int));
	if (arr == NULL)
		return (0);
	i = -1;
	while (++i < len)
		arr[i] = b->tab[i];
	i = 0;
	tmp = arr[0];
	x = 0;
	while (i < len - 1)
	{
		if (tmp < arr[i + 1])
		{
			tmp = arr[i + 1];
			x = i + 1;
		}
		i++;
	}
	free(arr);
	return (x);
}
