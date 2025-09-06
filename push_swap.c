/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:02:27 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/06 00:44:22 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 1;
	if (argc < 2)
		return (write(2, "Error\n", 7), 1);
	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	// if (!stack_a || !stack_b)
	// 	free_tudo()
	while (i < argc)
	{
		if (!(*argv[i]))
			return (write(2, "Error\n", 7), 1);
		if (!put_stack(stack_a, ft_split(argv[i], ' ')))
			return (1);
		i++;
	}
	return (0);
}