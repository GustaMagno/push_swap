/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:02:31 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/06 00:44:11 by gustoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#  include <limits.h>
#  include <stdarg.h>
#  include <stdio.h>
#  include <stdlib.h>
#  include <unistd.h>
#  include <sys/time.h>

typedef	struct s_node
{
	struct s_sa	*previous;
	void		*content;
	struct s_sa	*next;
}	t_node;

typedef	struct s_stack
{
	t_node	*first;
	t_node	*last;
}	t_stack;

char		**ft_split(char const *s, char c);
int			put_stack(t_stack **stack, char **args);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int			parsing(char **args);
long		ft_atol(const char *str);

#endif