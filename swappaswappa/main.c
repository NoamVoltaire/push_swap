/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 00:20:34 by noam              #+#    #+#             */
/*   Updated: 2024/02/17 14:49:01 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	index_and_and_sort(char **args, int **array, int len)
{
	int	**sorted;
	int	i;
	int	j;

	i = 0;
	j = 0;
	sorted = create_array(args, len);
	quicksort_array(sorted, 0, len -1);
	// print_array_test(sorted);
	while (array[j])
	{
				// printf("ARRAY[J] = %d	", array[j][0]);
		i = 0;
		while (sorted[i] && array[j])
		{
			if (array[j][0] == sorted[i][0])
			{
			// printf("hey\n");
				array[j][1] = i;
				j++;
			}
			i++;
		}
			// printf("i = %d	", i);
			// printf("j = %d\n", j);
		len--;
	}
	free (sorted);
}

int	**create_array(char **args, int len)
{
	int	**array;
	// int	i;

	// i = 0;
	array = (int **)malloc(sizeof(int *) * len + 1);
	if (!array)
		return (NULL);
	array[len] = 0;
	while (len > 0)
	{
		len--;
		array[len] = (int *)malloc(sizeof(int) * 2);
		if (!array[len])
			return (NULL);
		array[len][0] = ft_atoi(args[len]);
		array[len][1] = 0;
	}
	return (array);
}

void	pre_init_stack(char **args, int len, t_block **a, t_block **b)
{
	int	**array;

	array = create_array(args, len);
	index_and_and_sort(args, array, len);
	fillstack(a, array, len);
	// printf("AH\n");
	// ft_lstiter(*a, print);
	// print_array_test(array);
	
}

/* main function that takes the input to have it as an int array*/

int	main(int ac, char **av)
{
	t_block	*a;
	t_block	*b;
	int		*index;
	int		trueindex;
	char	**args;
	int		len;


	index = &trueindex;
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
	pre_init_stack(args, len, &a, &b);
	start_sort(&a, &b, len);
	free(a);
	free(b);
	// fillstack(&a, args, len);
	// *index = 0; 
	// ft_lstiter(a, print);

	// printf("pivot index %d\n", partition(&a, &b, 0, len - 1, index));
	// quicksort(&a, &b, 0, len - 1, index);

	// go(&a, index, 2);
	// start_sort(&a, &b, len);

	
	// ft_lstiter(a, print);
	// quicksort(&a, &b, 0, len - 1, index);
	// ft_lstiter(a, print);
	// go(&a, index, 0);
	// ft_lstiter(a, print);


	
	// sa(&a);
	// ra(&a);
	
	// ft_lstiter(a, print);
	// ft_lstiter(b, print);
	// ft_lstiter(a, print);

	// create_array(args, len);
}


/*	Phase 1
we want a function that places the the orders of the nodes (name it index)
so that we can start by placing the nodes in B
in big chunks (len/4 or len/6)
using the index with ra and pb (and rb and rr if we're good)
until A is at 3
*/

/*	Phase 2

*/

/*
*
*
*	TEST FUNCTIONS
*
*
*
*/

void	print_array_test(int **array)
{
	int i = 0;
	while (array[i] && array[i + 1] != 0)
	{
		printf("array value = %d | %d\n", array[i][0],array[i][1]);
		i++;
	}
		printf("array value = %d | %d\n", array[i][0],array[i][1]);

}

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
		f(lst->index);
		printf("\n");
		lst = lst->next;
	while (tmp->content != lst->content)
	{
		f(lst->content);
		f(lst->index);
		printf("\n");
		lst = lst->next;
	}
	printf("\n");
}


void	print(int nb)
{
	printf("%d ",nb);
}	