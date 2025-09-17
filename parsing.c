/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:02:40 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/05 21:49:01 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_content(t_node *list)
{
	void	*tempcontent;
	t_node	*node;
	t_node	*head;
	int		i;
	int		j;

	i = 0;
	head = list;
	while (list)
	{
		j = 0;
		node = head;
		tempcontent = list->content;
		while (node)
		{
			if (*(int *)node->content == *(int *)tempcontent && i != j)
				return (0);
			node = node->next;
			j++;
		}
		list = list->next;
		i++;
	}
	return (1);
}

int	check_int(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (ft_atol(arr[i]) > 2147483647 || ft_atol(arr[i]) < -2147483648)
			return (0);
		i++;
	}
	return (1);
}

int	check_numbers(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i += (str[i] == '-' || str[i] == '+');
		if ((str[i] < '0' || str[i] > '9') && str[i] != 32 && str[i] != 9)
			return (0);
		i++;
	}
	return (1);
}

int	parsing(char **args)
{
	int	i;
	int	j;

	i = 1;
	while (args[i])
	{
		if (!check_numbers(args[i]) || !(*args[i]))
			return (0);
		i++;
	}
	if (!check_int(args))
		return (0);
	return (1);
}

