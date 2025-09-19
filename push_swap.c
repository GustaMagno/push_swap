/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:02:27 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/20 00:24:28 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		list_len(t_node *node)
{
	
}

void	put_index(t_node *node)
{
	
}

void	print_stack(t_node *fnode)
{
	printf("STACK:\n");
	while (fnode)
	{
		if (!fnode->next)
			break;
		printf(" %i -", fnode->content);
		fnode = fnode->next;
	}
	printf(" %i \n", fnode->content);
}

int	main(int argc, char **argv)
{
	int		i;
	t_stack	stack_a;
	t_stack	stack_b;

	i = 1;
	if (argc < 2 || !parsing(argv))
		return (write(2, "Error\n", 7), 1);
	stack_a = put_stack(argv);
	stack_b = (t_stack){.first=NULL, .last=NULL};
	if (!check_content(stack_a.first))
		return (free_node(stack_a.first), write(2, "Error\n", 7), 1);
	if (!in_order(stack_a.first))
		return (0);
	put_index(stack_a.first);
	free_node(stack_a.first);
	free_node(stack_b.first);
	return (0);
}
