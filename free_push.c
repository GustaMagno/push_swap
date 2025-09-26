/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 21:16:27 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/26 21:16:27 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
