/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 20:56:27 by davidos-          #+#    #+#             */
/*   Updated: 2026/04/22 22:24:56 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP 

typedef struct s_stack
{
	int	data; 
	struct s_stack	*next;
}	t_stack;

t_stack *ft_new_node(int num);
void	ft_stack_push(t_stack **stack, int num);
t_stack	*ft_create_stack(int *num, int len);
int	ft_is_unique(int *arr, int len);
int	ft_is_int_range(char *str);
int	ft_is_valid_int(char *str);

#endif /* ifndef PUSH_SWAP */

