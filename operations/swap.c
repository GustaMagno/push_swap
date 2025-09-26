/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 21:23:18 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/26 21:23:18 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_stack *stack, char *str)
{
	t_node	*f_node;
	t_node	*se_node;

	f_node = stack->first;
	se_node = f_node->next;
	f_node->next = se_node->next;
	se_node->next = f_node;
	stack->first = se_node;
	if (str)
		write(1, str, 3);
}

void	sa(t_stack *stack)
{
	swap(stack, "sa\n");
}

void	sb(t_stack *stack)
{
	swap(stack, "sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, "ss\n");
}
