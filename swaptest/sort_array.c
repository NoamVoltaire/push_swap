/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:46:25 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/16 19:38:28 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	compare_and_rewrite(long **arr, long **a1, long **a2, int s, int l1, int l2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((i < l1) && (j < l2))
	{
		if (a1[i][1] <= a2[j][1])
		{
			arr[s] = a1[i];
			i++;
		}
		else
		{
			arr[s] = a2[j];
			j++;
		}
		s++;
	}
	while (i < l1)
	{
		arr[s] = a1[i];
		i++;
		s++;
	}
	while (j < l2)
	{
		arr[s] = a2[j];
		j++;
		s++;
	}
}

void	write_in_sub_arrays(long **arr, long **a1, int start, int len)
{
	int	i;
	long euh;
	// int	j;
	// int	len1;
	// int	len2;

	// j = 0;
	i = 0;
	// euh = (long *)malloc(sizeof(long) * 2);
	// len1 = (m - s + 1);
	// len2 = (e - m);
	while (i < len)
	{
		// euh = arr[start + i];
		// a1[i] = euh;
		a1[i] = arr[start + i];
		i++;
	}
	// while (j++ < len2)
		// a2[j] = arr[m + j + 1][1];
}

void	merge(long **arr, int s, int m, int e)
{
	long **a1;
	long **a2;
	
	// a1 = create_sub_arr(,);
	a1 = (long **)malloc(sizeof(long *) * (m - s + 1));
	a2 = (long **)malloc(sizeof(long *) * (e - m));
	write_in_sub_arrays(arr, a1, s, (m - s + 1));
	write_in_sub_arrays(arr, a2, (m + 1), (e - m));
	compare_and_rewrite(arr, a1, a2, s, (m - s + 1), (e - m));
	print_array_test(a1);
	ft_printf("up is a1 down is a2\n");
	print_array_test(a2);
	// free(a1);
	// free(a2);
}


void	merge_sort(long **arr, int s, int e)
{
	int	mid;

	if ((e - s + 1) > 1)
	{
	mid = (e + s)/ 2;
	merge_sort(arr, s, mid);
	merge_sort(arr, (mid + 1), e);
	merge(arr, s, mid, e);
	print_array_test(arr);
	}
	
}

void	sort_array(long **arr, int len)
{
	merge_sort(arr, 0, len -1);
}
