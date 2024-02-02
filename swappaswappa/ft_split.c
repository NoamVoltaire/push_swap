/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:34:27 by noam              #+#    #+#             */
/*   Updated: 2024/02/01 11:14:49 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

static	int	wordcount(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i] && (s[i] != c))
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static	char	*wordcopy(char *s, char c, int i)
{
	int		index;
	char	*word;

	index = 0;
	while (s[i] && (s[i] != c))
	{
		index++;
		i++;
	}
	word = (char *)malloc(sizeof(char) * index + 1);
	i = i - index;
	index = 0;
	while (s[i] && (s[i] != c))
	{
		word[index] = s[i];
		i++;
		index++;
	}
	word[index] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	char	**tab;

	i = 0;
	j = 1;
	if (s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (wordcount((char *)s, c) + 2));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i] && (s[i] != c))
		{
			tab[j] = wordcopy((char *)s, c, i);
			j++;
		}
		while (s[i] && (s[i] != c))
			i++;
	}
	tab[j] = 0;
	return (tab);
}


int	count_args(char **argsss)
{
	int	i;

	i = 0;
	while (argsss[i + 1] != 0)
		i++;
	printf("le num%d\n", i);
	return (i);
}
// int	main(int ac, char **av)
// {
// 	char	**tab = ft_split(av[1], ' ');
// 	int		i;
// 	i = 0;

// 	if (ac == 2)
// 	{
// 		while (tab[i])
// 		{
// 			printf("%s\n", tab[i]);
// 			i++;
// 		}
// 	}
// 	else
// 		printf("need 1 arg separated by spaces");
// 	free(tab);
// }
//GOOD