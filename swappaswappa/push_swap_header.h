/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:12:20 by noam              #+#    #+#             */
/*   Updated: 2024/02/01 11:08:48 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include <stdio.h>
# include <stdlib.h>
// # include "ft_printf/ft_printf.h"

// typedef struct s_first
// {
// 	int				nb_struct;
// 	struct s_node	*first;
// }	t_first;


typedef struct s_node
{
	long			content;
	long			index;
	// long			index;
	
	struct s_node	*next;
	struct s_node	*prev;
}	t_block;

char	**ft_split(char const *s, char c);
int		errors(void);

// int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	check_input(char **arg);


int		count_args(char **argsss);

void	print_array_test(long **array);
long	**create_array(char **args, int len);
void	sort_array(long **arr, int len);
// long	*fill_array(long **array, t_block *lst, int i);

void	fillstack(t_block **a, t_block **b, char **args, int i, long **array);
void	start_sort(t_block **a, t_block **b, int len, long **array);
void	sort_three(t_block **a);
void	sort_six(t_block **a, t_block **b, int len);
void	sort_big(t_block **a, t_block **b, int len, long **array);


int		cmp_lst(t_block **lst);
int		cmp_stack(t_block **a, t_block **b);
int		cmp_whole(t_block **a, int len);


void	print(int nb);
int		len_stack(t_block *lst);
void	ft_lstiter(t_block *lst, void (*f)(int));


t_block	*ft_lstnew(int content);
void	ft_lstadd_front(t_block **lst, t_block *new);
int		ft_atoi(const char *nptr);
void	sa(t_block **lst);
void	ra(t_block **lst);
void	rra(t_block **lst);
void	pa(t_block **lst, t_block **b_lst);
void	sb(t_block **lst);
void	rb(t_block **lst);
void	rrb(t_block **lst);
void	pb(t_block **b_lst, t_block **lst);
void	ss(t_block **a, t_block **b);
void	rr(t_block **a, t_block **b);
void	rrr(t_block **a, t_block **b);
int		ft_printf(const char *form, ...);
#endif
