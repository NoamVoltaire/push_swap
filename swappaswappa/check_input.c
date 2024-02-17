/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:34:39 by noam              #+#    #+#             */
/*   Updated: 2024/02/08 21:34:43 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	static	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		sum;

	i = 0;
	sum = 0;
	while ((s1[i] || s2[i]) && sum == 0 && (i < n))
	{
		sum = *((unsigned char *)s1 + i) - *((unsigned char *)s2 + i);
		i++;
	}
	return (sum);
}

int static	is_nb(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	check_input(char **arg)
{
	long	index;
	int		i;

	i = 0;
	index = 0;
	while (arg[i])
	{
		index = 1;
		while (arg[i + index])
		{
			if (!is_nb(arg[i]))
				errors(NULL,NULL);
			ft_atoi(arg[i]);
			if (!ft_strncmp(arg[i], arg[i + index], 12))
				errors(NULL,NULL);
			index++;
		}
		i++;
	}
}

// void	check_overflows(t_block )

