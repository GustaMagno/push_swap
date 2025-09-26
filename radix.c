/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 20:29:28 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/26 21:21:28 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bit(int index)
{
	int	i;

	i = 0;
	while ((index >> i) != 0)
		i++;
	return (i);
}

int	lst_size(t_node *node)
{
	int	i;

	i = 0;
	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}

void	radix(t_stack *stack_a, t_stack *stack_b)
{
	int		lsb;
	int		i;
	int		len_index;
	t_node	*node;
	int		len_stack;

	lsb = 0;
	len_stack = lst_size(stack_a->first);
	len_index = max_bit(len_stack - 1);
	while (lsb < len_index)
	{
		i = 0;
		while (i < len_stack)
		{
			node = stack_a->first;
			if ((node->index >> lsb) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			i++;
		}
		while (stack_b->first)
			pa(stack_a, stack_b);
		lsb++;
	}
}
