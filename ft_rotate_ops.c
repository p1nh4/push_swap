/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_ops.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 19:12:29 by davidos-          #+#    #+#             */
/*   Updated: 2026/04/25 20:02:27 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_lstsize(t_stack *lst)
{
	int		len;
	t_stack	*node;

	len = 0;
	node = lst;
	while (node != ((void *)0))
	{
		len++;
		node = node->next;
	}
	return (len);
}

void	ft_rotate(t_stack **a)
{
	int		size;
	t_stack	*temp;

	temp = *a;
	size = ft_lstsize(*a);



}
