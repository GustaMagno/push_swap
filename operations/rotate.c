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
		write(1, str, 4);
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


// sa

// 10101010
// 00110101
// 11010101
// 11101111

// sb

// 11101010
// 00001010
// 00000001

// -19 - 0
// -1 - 2
// 18 - 5
// 0  - 3
// 1 - 4
// -6 - 1



