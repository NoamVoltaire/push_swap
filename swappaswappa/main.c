/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 00:20:34 by noam              #+#    #+#             */
/*   Updated: 2024/01/30 16:53:17 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

/* main function that takes the input to have it as an int array*/

int	main(int ac, char **av)
{
	t_block	*a;
	t_block	*b;
	char	**args;
	int		len;

	a = NULL;
	b = NULL;
	args = NULL;
	if (ac < 2)
		return (errors());
	else if (ac == 2)
	{
		args = ft_split(av[1], 32);
		len = count_args(args);
	}
	else
		args = (av + 1);
	check_input(args);
}