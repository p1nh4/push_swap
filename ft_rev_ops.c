/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 21:14:07 by davidos-          #+#    #+#             */
/*   Updated: 2026/05/01 19:25:59 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include  <unistd.h>

t_stack	*ft_penultimate(t_stack *node)
{
	t_stack	*temp;

	temp = node;
	while (temp->next != ((void *)0))
	{lst_node->next = *a;
   55     *a = lst_node;
   56     penum_node->next = ((void *)0);
		node = temp;
		temp = temp->next;
	}
	return (node);
}

t_stack *ft_lstnode(t_stack *node)
{
	t_stack	*temp;
	t_stack	*lstnode;

	temp = node;
	while (temp != (void *)0)
	{
		lstnode = temp;
		temp = temp->next;
	}
	return (lstnode);
}

void	ft_rev(t_stack **a)
{
	t_stack	*lst_node;
	t_stack	*penum_node;

	if (!*a || (*a)->next == ((void *)0))
		return ;
	lst_node = ft_lstnode(*a);
	penum_node = ft_penultimate(*a);
	lst_node->next = *a;
	*a = lst_node;
	penum_node->next = ((void *)0);
}

void	ft_rra(t_stack **a)
{
	ft_rev(a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b)
{
	ft_rev(b);
	write(1, "rrb\n", 4);

}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rev(a);
	ft_rev(b);
	write(1, "rrr\n", 4);

}
