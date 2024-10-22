/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:33:43 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:33:44 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

long long int	ft_atoi(char *str)
{
	int						i;
	int						s;
	unsigned long long int	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = (r * 10) + (str[i] - 48);
		if (s == 1 && r > 9223372036854775807)
			return (-1);
		if (s == (-1) && r > 9223372036854775807)
			return (0);
		i++;
	}
	return (r * s);
}

char	*ft_strdup(char *s)
{
	size_t	k;
	char	*ptr;
	size_t	i;

	k = ft_strlen(s) + 1;
	ptr = (char *)malloc(k * sizeof(char));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i < k - 1)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
