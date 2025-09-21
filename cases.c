/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 00:16:32 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/21 01:37:55 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order3(t_stack *stack_a)
{
	if (stack_a->first->index == 2 && stack_a->first->next->index == 1)
	{
		ra(stack_a);
		sa(stack_a);
		return ;
	}
	if (stack_a->first->index == 0)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else
	{
		ra(stack_a);
		if (!in_order(stack_a->first))
			order3(stack_a);
	}
}

void	order4(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	if (stack_a->first->index == 3)
		rra(stack_a);
	if (stack_a->first->index == 2)
	{
		rra(stack_a);
		rra(stack_a);
	}
	// order3(stack_a);
	// pa(stack_a, stack_b);
	// ra(stack_a);
}

// void	order5()