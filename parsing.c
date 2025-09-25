/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:02:40 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/20 23:46:22 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_content(t_node *head)
{
	t_node	*node;
	t_node *list;
	
	list = head;
	while (list)
	{
		node = head;
		while (node)
		{
			if (node->content == list->content && node != list)
				return (0);
			node = node->next;
		}
		list = list->next;
	}
	return (1);
}

int	in_order(t_node *node)
{
	int	nb;
	
	if (!node)
		return(write(2, "Error\n", 7), 1);
	nb = node->content;
	while (node)
	{
		if (nb > node->content)
			return (0);
		else
			nb = node->content;
		node = node->next;
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

	i = 1;
	while (args[i])
	{
		if (!check_numbers(args[i]))
			return (0);
		i++;
	}
	if (!check_int(args))
		return (0);
	return (1);
}

