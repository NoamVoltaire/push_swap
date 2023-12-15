/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvoltair <nvoltair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:46:25 by nvoltair          #+#    #+#             */
/*   Updated: 2023/12/15 17:59:36 by nvoltair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	sort_array(long **arr,int len)
{
	merge_sort(arr, 0, len -1);
}

void	merge_sort(long **arr, int s, int e)
{
	int	mid;
	if ((e - s) <= 1)
		return ;
	mid = (e + s) / 2;
	merge_sort(arr, s, mid);
	merge_sort(arr, mid, e);
	merge(arr, s, mid, e);
}