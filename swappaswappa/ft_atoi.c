/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:29:12 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/10 17:46:04 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
#include <limits.h>

/*	ft_atoi that return Error if :*/
/*	not a number*/
/*	overflow	*/
int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	sum;

	sum = 0;
	sign = 1;
	i = 0;
	// while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	// 	i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	// if (nptr[i] < '0' || nptr[i] > '9')
	// 	return (errors()); //
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = sum * 10 + (nptr[i] - '0');
		i++;
	}
	if ((sum * sign) < INT_MIN || sum > INT_MAX)
		return (errors(NULL, NULL));
	return (sum * sign);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("real ; %d\n", atoi(av[1]));
// 		printf("mine ; %d\n", ft_atoi(av[1]));
// 	}
// }

// GOOD~
