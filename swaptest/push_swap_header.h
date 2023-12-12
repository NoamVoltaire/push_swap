/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:12:20 by noam              #+#    #+#             */
/*   Updated: 2023/12/10 13:35:58 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include "ft_printf/ft_printf.h"

typedef struct s_node
{
	int				content;
	struct s_node	*next;
	struct s_node	*prev;
}	t_block;

void	print(int nb);
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
int	ft_printf(const char *form, ...);
#endif
