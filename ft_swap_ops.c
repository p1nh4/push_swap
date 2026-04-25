/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:54:24 by davidos-          #+#    #+#             */
/*   Updated: 2026/04/25 15:51:50 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	ft_swap(t_stack *stack)
{
	int	temp;

	if (!stack ||  stack->next == ((void *)0))
		return ;
	temp = stack->data;
	stack->data = stack->next->data;
	stack->next->data = temp;
}

void	ft_sa(t_stack *a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack *b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack *a, t_stack *b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}
