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
	node->next = list->first;
	list->first = node;
}

void	push_stack(t_stack *src, t_stack *dest, char *str)
{
	t_node	*node;

	node = src->first;
	if (!node)
		return ;
	src->first = node->next;
	node->next = NULL;
	if (dest->first)
		node->next = dest->first;
	else
		dest->last = node;
	dest->first  = node;
	write(1, str, 4);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push_stack(stack_b, stack_a, "pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push_stack(stack_a, stack_b, "pb\n");
}
