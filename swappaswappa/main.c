/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 00:20:34 by noam              #+#    #+#             */
/*   Updated: 2024/02/02 16:44:30 by nvoltair         ###   ########.fr       */
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
	len = ac - 1;
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
	fillstack(&a, args, len);
	start_sort(&a, &b, len);
	ft_lstiter(a, print);

	// create_array(args, len);
}


/*
*
*
*	TEST FUNCTIONS
*
*
*
*/
void	ft_lstiter(t_block *lst, void (*f)(int))
{
	int i = 6; // 

	if (!lst)
	{
		printf("empty list\n");	
		return ;
	}
	t_block *tmp = lst;
		f(lst->content);
		lst = lst->next;
	while (tmp->content != lst->content)
	{
		f(lst->content);
		lst = lst->next;
	}
	printf("\n\n");
}


void	print(int nb)
{
	printf("nb = %d\n",nb);
}	