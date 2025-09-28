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
	t_node	*list;

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

static int	check_empty(char *str)
{
	if (!str)
		return (0);
	while (*str == ' ')
		str++;
	if (*str == '\0')
		return (0);
	return (1);
}

int	check_int(char **arr)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (arr[i])
	{
		j = 0;
		str = ft_split(arr[i], ' ');
		while (str[j])
		{
			if (ft_atol(str[j]) > 2147483647 || ft_atol(str[j]) < -2147483648)
				return (free_arr(str), 0);
			j++;
		}
		free_arr(str);
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
		if (((str[i] == '-' || str[i] == '+') && i != 0) && 
		(str[i - 1] >= '0' && str[i - 1] <= '9'))
			return (0);
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
		if (!check_numbers(args[i]) || !check_empty(args[i]))
			return (0);
		i++;
	}
	if (!check_int(args))
		return (0);
	return (1);
}
