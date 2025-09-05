#include "push_swap.h"

void	ft_lstadd_back(t_sa **stack, t_sa *node)
{
	t_sa			*temp;

	temp = malloc(sizeof(t_sa));
	if (!temp || !stack || !node)
		return (NULL);
	if (!*stack)
	{
		*stack = node;
		return ;
	}
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
}

t_sa	*ft_lstnew(void	*content)
{
	t_sa	*node;

	node = malloc(sizeof(t_sa));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}