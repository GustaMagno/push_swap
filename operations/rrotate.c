#include "../push_swap.h"

static void	rrotate(t_stack *stack, char *str)
{
	t_node	*first;
	t_node	*last;

	first = stack->first;
	last = stack->last;
	while (first->next != last)
		first = first->next;
	stack->last = first;
	first->next = NULL;
	last->next = stack->first;
	stack->first = last;
	if (str)
		write(1, str, 5);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rrotate(stack_a, NULL);
	rrotate(stack_b, "rrr\n");
}
void	rra(t_stack *stack)
{
	rrotate(stack, "rra\n");
}
void	rrb(t_stack *stack)
{
	rrotate(stack, "rrb\n");
}
