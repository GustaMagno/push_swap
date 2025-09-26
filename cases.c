/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 20:46:41 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/26 20:46:41 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order3(t_stack *stack_a)
{
	int	first;
	int	sec;
	int	third;

	first = stack_a->first->content;
	sec = stack_a->first->next->content;
	third = stack_a->first->next->next->content;
	if (first > third && first > sec && sec > third)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (first < third && first < sec && sec > third)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (first > sec && first < third)
		sa(stack_a);
	else if (first > third && first < sec)
		rra(stack_a);
	else if (first > sec && first > third && third > sec)
		ra(stack_a);
}

void	order4(t_stack *stack_a, t_stack *stack_b)
{
	int	first;
	int	sec;
	int	third;
	int	fourth;

	first = stack_a->first->content;
	sec = stack_a->first->next->content;
	third = stack_a->first->next->next->content;
	fourth = stack_a->first->next->next->next->content;
	if (sec < first && sec < third && sec < fourth)
		sa(stack_a);
	else if (third < first && third < sec && third < fourth)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (fourth < first && fourth < sec && fourth < third)
		rra(stack_a);
	pb(stack_a, stack_b);
	order3(stack_a);
	pa(stack_a, stack_b);
}

void	order5(t_stack *stack_a)
{
	int	first;
	int	sec;
	int	third;
	int	fourth;
	int	last;

	first = stack_a->first->content;
	sec = stack_a->first->next->content;
	third = stack_a->first->next->next->content;
	fourth = stack_a->first->next->next->next->content;
	last = stack_a->first->next->next->next->next->content;
	if (sec < first && sec < third && sec < fourth && sec < last)
		sa(stack_a);
	else if (third < first && third < sec && third < fourth && third < last)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (fourth < first && fourth < sec && fourth < third && fourth < last)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (last < first && last < sec && last < third && last < fourth)
		rra(stack_a);
}
