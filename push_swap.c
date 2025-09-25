/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:02:27 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/21 01:14:22 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	put_index(t_node *node)
{
	t_node	*head;
	t_node	*temp;

	head = node;
	while (node)
	{
		temp = head;
		node->index = 0;
		while (temp)
		{
			node->index += (node->content > temp->content);
			temp = temp->next;
		}
		node = node->next;
	}
}

void	cases(int len, t_stack *stack_a, t_stack *stack_b)
{
	if (len == 2)
		ra(stack_a);
	else if (len == 3)
		order3(stack_a);
	else if (len == 4)
		order4(stack_a, stack_b);
	else if (len == 5)
	{
		order5(stack_a);
		pb(stack_a, stack_b);
		order4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
	else
		radix(stack_a, stack_b);
}

void	print_stack(t_node *fnode)
{
	printf("STACK:\n");
	while (fnode)
	{
		printf(" Content: %i, index: %i\n", fnode->content, fnode->index);
		fnode = fnode->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc < 2 || !parsing(argv))
		return (write(2, "Error\n", 7), 1);
	stack_a = put_stack(argv);
	stack_b = (t_stack){.first=NULL, .last=NULL};
	if (!check_content(stack_a.first))
		return (free_node(stack_a.first), write(2, "Error\n", 7), 1);
	if (in_order(stack_a.first))
		return (free_node(stack_a.first), 0);
	put_index(stack_a.first);
	cases(lst_size(stack_a.first), &stack_a, &stack_b);
	print_stack(stack_a.first);
	free_node(stack_a.first);
	free_node(stack_b.first);
	return (0);
}
