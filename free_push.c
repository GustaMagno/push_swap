#include "push_swap.h"

void	free_node(t_node *node)
{
	if (node)
	{
		free_node(node->next);
		free(node);
	}
}

void	free_arr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}