/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:56:15 by davidos-          #+#    #+#             */
/*   Updated: 2026/02/24 22:05:22 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	*num;

	num = malloc(sizeof(int) * (arc - 1));
	if (!num)
		return (0);
	i = 0;
	while (i < (argc - 1))
	{
		num[i] = atoi(argv[i + 1]);
		i++;
	}


	return ();
}
