#include "../push_swap.h"

void	swap2(t_stack **stack, char *str)
{
	t_node	*f_node;
	t_node	*se_node;

	f_node = (*stack)->first;
	se_node = f_node->next;
	se_node->previous = NULL;
	f_node->previous = se_node;
	f_node->next = se_node->next;
	se_node->next = f_node;
	(*stack)->first = se_node;
	if (str)
		write(1, str, 4);
}
void	swap(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && stack_b)
	{
		swap2(stack_a, NULL);
		swap2(stack_b, "ss\n");
	}
	else if (stack_a)
		swap2(stack_a, "sa\n");
	else
		swap2(stack_b, "sb\n");
}
