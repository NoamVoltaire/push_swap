/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array_quicksort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:56:34 by noam              #+#    #+#             */
/*   Updated: 2024/01/14 23:32:15 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	compare_and_place_index(long **arr, long **sorted, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (arr[i][1] == sorted[j][1])
				arr[i][0] = j + 1;
			j++;
		}
		i++;
	}
}

int	partition(long **arr, int start, int end)
{
	int		pivot;
	int		i;
	int		j;
	long	*tmp;

	pivot = arr[end][1];
	i = start - 1;
	j = start;
	while (j <= end - 1)
	{
		if (arr[j][1] <= pivot)
		{
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
		j++;
	}
	tmp = arr[i + 1];
	arr[i + 1] = arr[end];
	arr[end] = tmp;
	return (i + 1);
}

void	quicksort(long **arr, int start, int end)
{
	int	pi;

	if (start < end)
	{
		pi = partition(arr, start, end);
		quicksort(arr, start, pi - 1);
		quicksort(arr, pi + 1, end);
	}
}

long	**copy_array(long **arr, int len)
{
	long	**arraycopy;
	int		i;

	i = 0;
	arraycopy = (long **)malloc(sizeof(long *) * len + 1);
	if (arraycopy == NULL)
		return (NULL);
	while (i < len)
	{
		arraycopy[i] = arr[i];
		i++;
	}
	arraycopy[i] = 0;
	return (arraycopy);
}

void	sort_array(long **arr, int len)
{
	long	**sorted;

	sorted = copy_array(arr, len);
	quicksort(sorted, 0, len - 1);
	compare_and_place_index(arr, sorted, len);
	print_array_test(arr);
}
