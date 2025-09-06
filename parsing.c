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
	if (((str[0] == '-' || str[0] == '+') && (str[1] == '-' || str[1] == '+'))
	|| str[0] == '0')
		return (0);
	i += (str[0] == '-' || str[0] == '+');
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	parsing(char **args)
{
	int	i;
	int	j;

	i = 0;
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

