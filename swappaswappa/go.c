#include "push_swap_header.h"

	static int go_nbr_of_call = 0;

void	go(t_block **a, int *index, int n)
{
	int LEN = 1000;
	
	if (*index == n)
		return ;
		
	if (*index < n)
	{
		if(n-*index< LEN-*index+n)
		{	
			while (*index < n)
			{
				ra(a);
				*index = (*index + 1);
			}
		}
		else	
			while (*index != n)
			{
				rra(a);
				*index = (LEN+ *index - 1)%LEN;
			}
	}
	else 
	{
		if (*index - n < LEN-*index+n)
			while (*index > n)
			{
				rra(a);
				*index = (*index - 1);
			}
		else 
			while (*index != n)
			{
				ra(a);
				*index = (*index + 1)%LEN;
			}
	}
		go_nbr_of_call++;
		printf("go = %d\n", go_nbr_of_call);
	return;
}

void	go0(t_block **a, int *index, int n)
{

	if (*index == n)
		return ;
	if (*index < n)
	{
		while (*index < n)
		{
			ra(a);
			*index = (*index + 1);
		}
	}
	else
	{
		while (*index > n)
		{
			rra(a);
			*index = (*index - 1);
		}
	}
		go_nbr_of_call++;
		printf("go = %d\n", go_nbr_of_call);
	return;
}

int partition(t_block **a, t_block **b, int low, int high, int *index)
{
	int	pivot;
	int	i;
	// int ipivot = low;

	i = low;
	go(a, index, low);
	pivot = (*a)->content;
	while (i <= high)
	{
		i++;
			// printf("pivot = %d	||", pivot);
			// printf("content = %d	||", (*a)->content);
			// printf("high = %d	||", i);
			// printf("iindex = %d	||", index[0]);
			// printf("i = %d\n", i);
		if ((*a)->content < pivot)
		{
			(*index)++;
			ra(a);
			// (*a) = (*a)->next;
		}
		else
		{
			// printf("euuuuu\n");
			pa(a, b);
		}
	}
	// printf("swag\n");
	// ft_lstiter(a, print);
	// ra(a);
	while ((*b) != NULL)
		pb(a, b);
	return *index;
}
