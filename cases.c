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
	int f_node;
	int s_node;
	int th_node;

	f_node = stack_a->first->content;
	s_node = stack_a->first->next->content;
	th_node = stack_a->first->next->next->content;
	if (f_node > th_node && f_node > s_node && s_node > th_node)
	{

		ra(stack_a);
		sa(stack_a);
	}
	else if (f_node < th_node && f_node < s_node && s_node > th_node)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (f_node > s_node && f_node < th_node)
		sa(stack_a);
	else if (f_node > th_node && f_node < s_node)
		rra(stack_a);
	else if (f_node > s_node && f_node > th_node && th_node > s_node)
		ra(stack_a);
}

void	order4(t_stack *stack_a, t_stack *stack_b)
{
	int f_node;
	int s_node;
	int th_node;
	int fh_node;

	f_node = stack_a->first->content;
	s_node = stack_a->first->next->content;
	th_node = stack_a->first->next->next->content;
	fh_node = stack_a->first->next->next->next->content;
	if (s_node < f_node && s_node < th_node && s_node < fh_node)
		sa(stack_a);
	else if (th_node < f_node && th_node < s_node && th_node < fh_node)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (fh_node < f_node && fh_node < s_node && fh_node < th_node)
		rra(stack_a);
	pb(stack_a, stack_b);
	order3(stack_a);
	pa(stack_a, stack_b);
}
void	order5(t_stack *stack_a)
{
	int f_nod;
	int s_nod;
	int t_nod;
	int fh_nod;
	int l_nod;

	f_nod = stack_a->first->content;
	s_nod = stack_a->first->next->content;
	t_nod = stack_a->first->next->next->content;
	fh_nod = stack_a->first->next->next->next->content;
	l_nod = stack_a->first->next->next->next->next->content;
	if (s_nod < f_nod && s_nod < t_nod && s_nod < fh_nod && s_nod < l_nod)
		sa(stack_a);
	else if (t_nod < f_nod && t_nod < s_nod && t_nod < fh_nod && t_nod < l_nod)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (fh_nod < f_nod && fh_nod < s_nod && fh_nod < t_nod && fh_nod < l_nod)
	{
		rra(stack_a);
		rra (stack_a);
	}
	else if (l_nod < f_nod && l_nod < s_nod && l_nod < t_nod && l_nod < fh_nod)
		rra (stack_a);
}

// 1 2 3 4 5
// 2 1 3 4 5
// 3 2 1 4 5
// 3 2 4 1 5
// 4 2 3 5 1
// void	order5()