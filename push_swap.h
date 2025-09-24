/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustoliv <gustoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:02:31 by gustoliv          #+#    #+#             */
/*   Updated: 2025/09/21 01:19:34 by gustoliv         ###   ########.fr       */
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
	int				index;
	int				content;
	struct s_node	*next;
}	t_node;

typedef	struct s_stack
{
	t_node	*first;
	t_node	*last;
}	t_stack;

char		**ft_split(char const *s, char c);
t_stack		put_stack(char **args);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int			parsing(char **args);
long		ft_atol(const char *str);
void		free_arr(char **str);
int			check_content(t_node *list);
t_node		*new_node(int content);
void		pb(t_stack *stack_a, t_stack *stack_b);
void		pa(t_stack *stack_a, t_stack *stack_b);
void		lst_add_front(t_stack *list, t_node *node);
void		swap2(t_stack *stack, char *str);
void		sa(t_stack *stack);
void		sb(t_stack *stack);
void		ss(t_stack *stack_a, t_stack *stack_b);
void		rr(t_stack *stack_a, t_stack *stack_b);
void		ra(t_stack *stack);
void		rb(t_stack *stack);
void		rrr(t_stack *stack_a, t_stack *stack_b);
void		rra(t_stack *stack);
void		rrb(t_stack *stack);
void		free_node(t_node *node);
int			in_order(t_node *node);
void		radix(t_stack *stack_a, t_stack *stack_b);
int			lst_size(t_node *node);
void		order3(t_stack *stack_a);
void		order4(t_stack *stack_a, t_stack *stack_b);
void		order5(t_stack *stack_a);


#endif