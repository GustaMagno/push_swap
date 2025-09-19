/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstfunc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:05:09 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/19 20:46:07 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int content)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->previous = NULL;
	new_node->content = content;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}
void	lst_add_back(t_node **list, t_node *node, t_stack *stack)
{
	t_node	*temp;

	if (!list || !node)
		return ;
	temp = *list;
	if (!*list)
	{
		*list = node;
		stack->last = node;
		stack->first = node;
		return ;
	}
	temp = *list;
	while (temp->next != NULL)
		temp = temp->next;
	node->previous = temp;
	temp->next = node;
	stack->last = node;
}

void	put_stack2(char **args, t_node **list, t_stack *stack)
{
	int	i;
	int	temp_c;
	t_node	*temp;

	i = 0;
	while (args[i])
	{
		temp_c = (int)ft_atol(args[i]);
		temp = new_node(temp_c);
		lst_add_back(list, temp, stack);
		if (!temp)
			return ;
		i++;
	}
}


t_stack	put_stack(char **args)
{
	t_node	*list;
	t_stack	stack;
	char	**clean_arg;
	int		i;

	i = 1;
	list = NULL;
	stack.first = NULL;
	stack.last = NULL;
	while (args[i])
	{
		clean_arg = ft_split(args[i], ' ');
		if (!clean_arg)
			return stack;
		put_stack2(clean_arg, &list, &stack);
		free_arr(clean_arg);
		i++;
	}
	return (stack);
}
