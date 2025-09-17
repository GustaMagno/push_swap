#include "../push_swap.h"

void	lst_add_front(t_stack *list, t_node *node)
{
	if (!list || !node)
		return ;
	if (!list->first)
	{
		list->first = node;
		list->last = node;
		node->next = NULL;
		return ; 
	}
	list->first->previous = node;
	node->next = list->first;
	list->first = node;
}

void	push_stack(t_stack *stack1, t_stack *stack2, char *str)
{
	t_node	*node;

	node = stack2->first;
	stack2->first = stack2->first->next;
	if (stack2->first)
		stack2->first->previous = NULL;
	else
		stack2->last = NULL;
	node->next = NULL;
	lst_add_front(stack1, node);
	write(1, str, 4);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push_stack(stack_a, stack_b, "pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push_stack(stack_a, stack_b, "pb\n");
}
