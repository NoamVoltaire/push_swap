/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_init_quick.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 03:13:36 by noam              #+#    #+#             */
/*   Updated: 2024/02/12 03:42:14 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	partition_array(int **array, int low, int high)
{
	int	pivot;
	int	i;
	int	j;
	int	*tmp;

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
	int	pivot;

	if (low < high)
	{
		pivot = partition_array(array, low, high);
		quicksort_array(array, low, pivot - 1);
		quicksort_array(array, pivot + 1, high);
	}
}


