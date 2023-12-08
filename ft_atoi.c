/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:29:12 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/08 14:09:22 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	sum;

	sum = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = sum * 10 + (nptr[i] - '0');
		i++;
	}
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
