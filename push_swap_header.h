/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:12:20 by noam              #+#    #+#             */
/*   Updated: 2023/12/08 19:42:12 by noam             ###   ########.fr       */
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
}	t_block;

t_block	*ft_lstnew(int content);
void	ft_lstadd_front(t_block **lst, t_block *new);
int		ft_atoi(const char *nptr);
void	sa(t_block **lst);
void	ra(t_block **lst, t_block *fk_lst);
int	ft_printf(const char *form, ...);
#endif
