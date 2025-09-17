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
	struct s_node	*previous;
	void			*content;
	struct s_node	*next;
}	t_node;

typedef	struct s_stack
{
	t_node	*first;
	t_node	*last;
}	t_stack;

char		**ft_split(char const *s, char c);
t_stack		*put_stack(char **args);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int			parsing(char **args);
long		ft_atol(const char *str);
void		free_arr(char **str);
int			check_content(t_node *list);
void		lst_add_back(t_node **list, t_node *node, t_stack **stack);
t_node		*new_node(void *content);
void		push_stack(t_stack **stack1, t_stack **stack2, char *str);
void		lst_add_front(t_stack **list, t_node *node);
void		swap2(t_stack **stack, char *str);
void		swap(t_stack **stack_a, t_stack **stack_b);

#endif