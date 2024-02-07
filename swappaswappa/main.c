/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 00:20:34 by noam              #+#    #+#             */
/*   Updated: 2024/02/06 17:07:22 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

/* main function that takes the input to have it as an int array*/

int	main(int ac, char **av)
{
	t_block	*a;
	t_block	*b;
	int	*index;
	int iindex;
	char **args;
	int		len;


	index = &iindex;
	// *index = 0; // iindex=0;

	a = NULL;
	b = NULL;
	args = NULL;
	len = ac - 1;
	if (ac < 2)
		return (0);
	else if (ac == 2)
	{
		args = ft_split(av[1], 32);
		len = count_args(args);
	}
	else
		args = (av + 1);
	check_input(args);
	fillstack(&a, args, len);
	*index = 0; 
	// ft_lstiter(a, print);

	// printf("pivot index %d\n", partition(&a, &b, 0, len - 1, index));
	// quicksort(&a, &b, 0, len - 1, index);

	// go(&a, index, 2);
	// start_sort(&a, &b, len);

	
	ft_lstiter(a, print);
	quicksort(&a, &b, 0, len - 1, index);
	ft_lstiter(a, print);
	go(&a, index, 0);
	ft_lstiter(a, print);


	
	// sa(&a);
	// ra(&a);
	
	// ft_lstiter(a, print);
	// ft_lstiter(b, print);
	// ft_lstiter(a, print);

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
	// int i = 6; // 
	
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
	printf("\n");
}


void	print(int nb)
{
	printf("%d ",nb);
}	