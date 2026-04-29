/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_ops.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 19:12:29 by davidos-          #+#    #+#             */
/*   Updated: 2026/04/29 21:09:43 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

t_stack	*ft_lstnode(t_stack *lst)
{
	t_stack	*node;

	node = lst;
	while (node != ((void *)0))
	{
		lst = node;
		node = node->next;
	}
	return (lst);
}

void	ft_rotate(t_stack **a)
{
	t_stack	*last_node;
	t_stack	*temp;

	if (!*a || (*a)->next == ((void *)0))
		return ;
	last_node = ft_lstnode(*a);
	temp = *a;
	*a = (*a)->next;
	last_node->next = temp;
	temp->next = ((void *)0);
}

void	ft_ra(t_stack **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}
