/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:34:44 by bouhammo          #+#    #+#             */
/*   Updated: 2024/05/06 15:34:46 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char *s, int start, int len)
{
	char	*ptr;
	int		k;
	int		i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	k = ft_strlen(s + start);
	if (k < len)
		len = k;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	count_word(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int	length_word(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

char	**ft_free(char **list, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	char	**list;
	int		word;
	int		i;

	word = count_word(s, c);
	list = (char **)malloc((word + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	i = 0;
	while (i < word)
	{
		while (*s == c && *s != '\0')
			s++;
		list[i] = ft_substr(s, 0, length_word(s, c));
		s = s + length_word(s, c);
		if (list[i] == NULL)
			return (ft_free(list, i));
		i++;
	}
	list[i] = NULL;
	return (list);
}
