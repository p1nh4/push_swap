/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:11:15 by davidos-          #+#    #+#             */
/*   Updated: 2026/04/22 22:15:19 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "push_swap.h"

t_stack *ft_new_node(int num)
{
	t_stack *node;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ((void *)0);
	node->data = num;
	node->next = ((void *)0);
	return (node);
}

void	ft_stack_push(t_stack **stack, int num)
{
	t_stack *node;
	node = ft_new_node(num);
	node->next = *stack;
	*stack = node;
} 

t_stack	*ft_create_stack(int *num, int len)
{
	int		i;
	t_stack *node;

	i = 0;
	node = ((void *)0);
	while (i < len)
	{
		ft_stack_push(&node, num[i]);
		i++;
	}
	return (node);
}
