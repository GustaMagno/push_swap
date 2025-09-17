/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:02:27 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/06 00:44:22 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node *fnode)
{
	printf("STACK:\n");
	while (fnode)
	{
		if (!fnode->next)
			break;
		printf(" %i -", *(int *)fnode->content);
		fnode = fnode->next;
	}
	printf(" %i \n", *(int *)fnode->content);
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 1;
	if (argc < 2 || !parsing(argv))
		return (write(2, "Error\n", 7), 1);
	stack_a = put_stack(argv);
	if (!check_content(stack_a->first))
		return (write(2, "Error\n", 7), 1);
	stack_b = malloc(sizeof(t_stack));
	stack_b->first = NULL;
	stack_b->last = NULL;
	if (!stack_b)
		return (0);
	push_stack(&stack_b, &stack_a, "pb\n");
	push_stack(&stack_b, &stack_a, "pb\n");
	print_stack(stack_a->first);
	print_stack(stack_b->first);
	swap(NULL, &stack_b);
	print_stack(stack_a->first);
	print_stack(stack_b->first);
	return (0);
}
