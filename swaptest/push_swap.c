/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:32:13 by noam              #+#    #+#             */
/*   Updated: 2023/12/15 17:38:19 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
#include "push_swap_header.h"

int	main(int ac, char **av)
{
	int		i;
	t_block	*anode;
	t_block	*bnode;
	t_block	*tmp;
	char	**argsss;
	long	**arrayyy;

	anode = NULL;
	bnode = NULL;
	argsss = NULL;
	i = ac -1;
	if (ac <= 1)
		return (errors());
	else if (ac == 2)
	{
		argsss = ft_split(av[1], 32);
		i = count_args(argsss);
	}
	else
		argsss = av;
	check_things(argsss);
	fillstack(&anode, &bnode, argsss, i);
	arrayyy = create_array(&anode, i);
	start_sort(&anode, &bnode, i);
	free (anode);
	// free (bnode);
	free (argsss);
}

void	fillstack(t_block **a, t_block **b, char **args, int i)
{
	t_block	*tmp;
	int		len;
	// int		**array;

	len = i;
	*a = ft_lstnew(ft_atoi(args[i]));
	i--;
	while (i > 0)
	{
		tmp = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_front(&(*a), tmp);
		i--;
	}
	// array = (int **)malloc(sizeof(int *) * len + 1);
	// if (!array)
		// ft_printf("oh hell nah\n");
	return ;
}

void	start_sort(t_block **a, t_block **b, int len)
{
	
	if (len <= 1)
		return ;
	else if (cmp_whole(a, len) == -1)
		return ;
	else if (len == 2)
	{
		if (!cmp_lst(a))
			sa(a);
	}
	else if (len == 3)
		sort_three(a);
			// pa(&(*a), &(*b));
			// pa(&(*a), &(*b));
			// pb(&(*a), &(*b));
			// pb(&(*a), &(*b));
			// pb(&(*a), &(*b));
			// rra(a);
			// sa(a);
			// ra(a);
			// ra(a);
	// copy_to_tab(a, len);

	// else if (len < 7)
	// 	sort_six(a, b, len);
	// else
		// mergesort(a ,b , 0, len);
	
	
			// pa(&(*a), &(*b));
	ft_lstiter(*a, print);
	ft_printf("euuuuh%d\n",len);
	ft_lstiter(*b, print);
	return ;
	// 123
	// 321
	// 312
	
}











void	ft_lstiter(t_block *lst, void (*f)(int))
{
	int i = 6; // 

	t_block *tmp = lst;
		f(lst->content);
		lst = lst->next;
	while (tmp->content != lst->content)
	{
		f(lst->content);
		lst = lst->next;
	}
}


void	print(int nb)
{
	ft_printf("nb = %d\n",nb);
}	
