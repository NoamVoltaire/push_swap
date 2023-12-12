/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noam <noam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:10:05 by noam              #+#    #+#             */
/*   Updated: 2023/12/10 15:18:29 by noam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	cmp_lst(t_block **lst)
{
	if ((*lst)->content > (*lst)->next->content)
		return (1);
	return (0);
}
