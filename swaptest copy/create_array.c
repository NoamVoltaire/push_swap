/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:38:14 by nvoltair          #+#    #+#             */
/*   Updated: 2024/01/13 17:19:02 by noam             ###   ########.fr       */
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

long	**create_array(t_block **a, int len)
{
	long **array;
	t_block *tmp;
	int	i;
	i = 0;
	tmp = (*a);
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



// int		**fill_array(int **array, t_block **lst, int len)
// {
// 	t_block	*tmp;
// 	int		i;
// 	int		j;

// 		array[0] = fill_with_indexes(array, lst, len);
// 		array = fill_with_values(array, lst, len);
		
// 		i++;
// 	return 
	
// 	i = 0;
// 	j = 0;
// 	tmp = (*lst);
// 	while (tmp->content != (*lst)->content)
// 	{
		
// 	}
// }










// long		*fill_array(long **array, t_block **lst, int len)
// {
// 	int	i;
// 	t_block	*tmp;


// 	tmp = (*lst);
// 	i = 0;
// 	while (tmp->content != (*lst)->content)
// 	{
// 		array[i] = (long *)malloc(sizeof(long));
// 		if (array[i] == NULL)
// 			return (NULL);
// 		array[i] = &(tmp)->content;
// 		i++;
// 	}
// 	return (array);	
// }






// int	**fill_with_index(int **array,t_block **lst, int len)
// {
// 	int	i;
// 	int *index;

// 	i = 0;
// 	index = malloc
// 	while (len)
// 	{
// 		array[i] = (int *)malloc(size) 
// 	}
// }
