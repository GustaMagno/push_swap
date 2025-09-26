/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 21:23:03 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/26 21:23:03 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(t_stack *stack, char *str)
{
	t_node	*first;
	t_node	*last;

	first = stack->first;
	last = stack->last;
	last->next = first;
	stack->first = first->next;
	first->next = NULL;
	stack->last = first;
	if (str)
		write(1, str, 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, "rr\n");
}

void	ra(t_stack *stack)
{
	rotate(stack, "ra\n");
}

void	rb(t_stack *stack)
{
	rotate(stack, "rb\n");
}
