/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:33:55 by noam              #+#    #+#             */
/*   Updated: 2024/01/30 16:54:53 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	print_array_test(long **array)
{
	int i = 0;
	// int	j = 0;

	ft_printf("alooooors\n\n");
	while (array[i] != 0)
	{
		ft_printf(" index and value = %d %d\n", array[i][0], array[i][1]);
		i++;
	}
}
long	static *fill_array(long **array, t_block *lst, int i)
{
	long	*index_and_value;
	t_block	*tmp;
	// long	i;
	
	i++;
	index_and_value = (long *)malloc(sizeof(long) * 2);
	if (index_and_value == NULL)
		return (NULL);
	index_and_value[0] = i;
	index_and_value[1] = lst->content;
	ft_printf("BABABOOEY\n");
	return(index_and_value);
}

long	**create_array(char **array, int len)
{
	long **array;
	// t_block *tmp;
	int	i;
	i = 0;
	// tmp = (*a);
	array = (long **)malloc(sizeof(long *) * len + 1);
	if (array == NULL)
		return(NULL);
	while (len--)
	{
		array[i] = fill_array(array, tmp, len);
		i++;
		tmp = tmp->next;	
	}
	array[i] = 0;
/*															SORTING ARRAY TIME*/
	print_array_test(array);
	sort_array(array, i);
	return (array);	
}

// long	**create_array(t_block **a, int len)
// {
// 	long **array;
// 	t_block *tmp;
// 	int	i;
// 	i = 0;
// 	tmp = (*a);
// 	array = (long **)malloc(sizeof(long *) * len + 1);
// 	if (array == NULL)
// 		return(NULL);
// 	while (len--)
// 	{
// 		array[i] = fill_array(array, tmp, len);
// 		i++;
// 		tmp = tmp->next;	
// 	}
// 	array[i] = 0;
// /*															SORTING ARRAY TIME*/
// 	print_array_test(array);
// 	sort_array(array, i);
// 	return (array);	
// }
