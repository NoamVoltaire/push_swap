/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:10:43 by nvoltair          #+#    #+#             */
/*   Updated: 2024/02/03 17:03:46 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
int	pick_pivot(t_block **a, int len)
{
	int pivot;
	int i;
	t_block *tmp;
	
	i = 0;
	tmp = (*a);
	while (i < len)
	{
		tmp = tmp->next;
		i++;
	}
	pivot = tmp->content;
	return (pivot);
}

int median_of_three(t_block **a, int low, int high)
{
	int math;
    int first;
    int middle;
    int last;
	
	math = (high - low); 
	first = (*a)->content;
    middle = pick_pivot(a, high / 2);
    last = pick_pivot(a, high - 1);
    if ((first < middle && middle < last) || (last < middle && middle < first))
        return middle;
    else if ((middle < first && first < last) || (last < first && first < middle))
        return first;
    else
        return last;
}

// void	go(t_block **a, int *index, int n)
// {
	
// }
// int	partition(t_block **a, t_block **b, int low, int high)
// {
// 	int pivot;
// 	int i;
// 	int pushes;
// 	t_block *tmp;
	
// 	i = low -1 ;
// 	pushes = 0;
// 	tmp = (*a);
// 	pivot = (*a)->prev->content;
// 	// ra(a);
// 	while (i < high && (*a)->content != pivot)
// 	{
// 			// printf("pivot = %d	||", pivot);
// 			// printf("content = %d	||", (*a)->content);
// 			// printf("high = %d	||", i);
// 			// printf("i = %d\n", i);
// 			// ft_lstiter((*a), print);

// 		if ((*a)->content > pivot)
// 		{
// 			i++;
// 			ra(a);
// 		}
// 		else
// 		{
// 			pushes++;
// 			pa(a, b);
// 		}
// 		// printf("pushes = %d\n", pushes);/
// 		// tmp = tmp->next;
// 	}
// 	// printf("and\n\n");
// 			// ft_lstiter((*a), print);
// 			// ft_lstiter((*b), print);
// 	// ra(a);
// 	while (pushes > 0)
// 	{
// 		pb(a, b);
// 		pushes--;
// 		// ft_lstiter((*b), print);
// 		// ft_lstiter((*a), print);
// 	}
// 	// swap(a, b);
// 			// ft_lstiter((*a), print);
// 	// printf("next step\n");
// 	return (i + 1);

// }


void	quicksort(t_block **a, t_block **b, int low, int end, int *index)
{
	int ipivot;
	if (low < end)
	{
		ipivot = partition(a, b, low, end, index);
			// ft_lstiter((*a), print);
			// ft_lstiter((*b), print);
		quicksort(a, b, ipivot + 1, end, index);
		quicksort(a, b, low, ipivot - 1, index);
	}
}




// int	partition(t_block **a, t_block **b, int low, int high)

void	print_array_testt(int **array)
{
	int i = 0;
	while (array[i] && array[i + 1] != 0)
	{
		printf("array value = %d | %d\n", array[i][0],array[i][1]);
		i++;
	}
		printf("array value = %d | %d\n", array[i][0],array[i][1]);

}
int	**create_arrayy(t_block **a, int len)
{
	int **array;
	t_block *tmp;
	int	i;
	i = 0;
	tmp = (*a);
	array = (int **)malloc(sizeof(int *) * len + 1);
	if (array == NULL)
		return(NULL);
	while (len--)
	{
		array[i] = (int *)malloc(sizeof(int) * 2);
		array[i][0] = tmp->content;
		array[i][1] = i;
		i++;
		tmp = tmp->next;	
	}
	array[i] = 0;
	return (array);	
}
int	partition_array(int **array, int low, int high)
{
	int pivot;
	int i;
	int j;
	int *tmp;
	i = low -1;
	j = low;
	pivot = array[high][0];
	while (j < high)
	{
		if (array[j][0] < pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
		j++;
	}
	tmp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = tmp;
	return (i + 1);
}
void	quicksort_array(int **array, int low, int high)
{
	int pivot;
	if (low < high)
	{
		pivot = partition_array(array, low, high);
		quicksort_array(array, low, pivot - 1);
		quicksort_array(array, pivot + 1, high);
	}
}

void	arrayquick(t_block **a, int len)
{
	int **array;
	int i;
	i = 0;
	array = create_arrayy(a, len);
	// print_array_testt(array);
	quicksort_array(array, 0, len -1);
	// print_array_testt(array);

}
void	sort_big(t_block **a, t_block **b, int len)
{
	int *index;
	*index = 0;
	arrayquick(a, len);
	// int *array;
	// array = create_array(a, len);
	// quicksort_array(array, 0, len);
	quicksort(a, b, 0, len -1, index);
	go(a, index, 0);
	// ft_lstiter((*a), print);

}