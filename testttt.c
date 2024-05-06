// #include <limits.h>
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// static int	ft_strlen(char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }
// static char	*ft_substr(char *s, int start, int len)
// {
// 	char	*ptr;
// 	int		k;
// 	int		i;

// 	if (!s)
// 		return (NULL);
// 	if (start > ft_strlen(s))
// 	{
// 		ptr = (char *)malloc(1 * sizeof(char));
// 		if (ptr == NULL)
// 			return (NULL);
// 		ptr[0] = '\0';
// 		return (ptr);
// 	}
// 	k = ft_strlen(s + start);
// 	if (k < len)
// 		len = k;
// 	ptr = (char *)malloc((len + 1) * sizeof(char));
// 	if (ptr == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		ptr[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	ptr[i] = '\0';
// 	return (ptr);
// }
// static int	count_word(char *s, char c)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
// 			count++;
// 		i++;
// 	}
// 	return (count);
// }
// static int	length_word(char *s, char c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c)
// 			break ;
// 		i++;
// 	}
// 	return (i);
// }
// static char	**ft_free(char **list, int len)
// {
// 	int	i;

// 	i = 0;
// 	while (i < len)
// 	{
// 		free(list[i]);
// 		i++;
// 	}
// 	free(list);
// 	return (NULL);
// }
// char	**ft_split(char *s, char c)
// {
// 	char	**list;
// 	int		word;
// 	int		i;

// 	word = count_word(s, c);
// 	list = (char **)malloc((word + 1) * sizeof(char *));
// 	if (!list)
// 		return (NULL);
// 	i = 0;
// 	while (i < word)
// 	{
// 		while (*s == c && *s != '\0')
// 			s++;
// 		list[i] = ft_substr(s, 0, length_word(s, c));
// 		s = s + length_word(s, c);
// 		if (list[i] == NULL)
// 			return (ft_free(list, i));
// 		i++;
// 	}
// 	list[i] = NULL;
// 	return (list);
// }

// long long int	ft_atoi(char *str)
// {
// 	int						i;
// 	int						s;
// 	unsigned long long int	r;

// 	i = 0;
// 	s = 1;
// 	r = 0;
// 	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			s = s * (-1);
// 		i++;
// 	}
// 	while (str[i] >= 48 && str[i] <= 57)
// 	{
// 		r = (r * 10) + (str[i] - 48);
// 		if (s == 1 && r > 9223372036854775807)
// 			return (-1);
// 		if (s == (-1) && r > 9223372036854775807)
// 			return (0);
// 		i++;
// 	}
// 	return (r * s);
// }
// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }

// void	ft_isdigit(int c)
// {
// 	if (c >= 48 && c <= 57)
// 	{
// 		return ;
// 	}
// 	else
// 	{
// 		ft_putstr("Error\n");
// 		exit(1);
// 	}
// }

// int				count_digits(char **av);

// int				process_strings(char **av);

// int	counter(char **av)
// {
// 	return (process_strings(av));
// }

// int	process_strings(char **av)
// {
// 	int	i;
// 	int	count;

// 	i = 1;
// 	count = 0;
// 	while (av[i] != NULL)
// 	{
// 		// Process each string and count digits
// 		count += count_digits(av[i]);
// 		i++;
// 	}
// 	return (count);
// }

// int	count_digits(char **av)
// {
// 	char	**list;
// 	int		count;
// 	int		k;

// 	list = ft_split(*av, ' ');
// 	count = 0;
// 	for (int j = 0; list[j] != NULL; j++)
// 	{
// 		k = 0;
// 		if (list[j][k] == '-' || list[j][k] == '+')
// 			k++;
// 		while (list[j][k])
// 		{
// 			if (!ft_isdigit(list[j][k]))
// 			{
// 				ft_putstr("Error\n");
// 				exit(1);
// 			}
// 			count++;
// 			k++;
// 		}
// 	}
// 	return (count);
// }

// int	main(int ac, char *av[])
// {
// 	(void)ac;
// 	int y = counter(av);

// 	printf("\n--------> %d \n", y);
// 	return (0);
// }