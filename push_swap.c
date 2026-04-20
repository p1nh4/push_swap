/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:56:15 by davidos-          #+#    #+#             */
/*   Updated: 2026/04/20 23:31:01 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "lib/libft.h"

int	ft_is_unique(int *arr, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_int_range(char *str)
{
	int	i;
	int	sign;
	int	size;

	sign = 0;
	i = ft_strlen(str);
	if (str[0] == '-')
	{
		sign = 1;
		i--;
	}
	else if (str[0] == '+')
	{
		sign = 2;
		i--;
	}
	if (i > 10)
		return (0);
	else
	{
		if (sign == 1)
			size = ft_strncmp(str + 1, "2147483648", 10);
		else if (sign == 2)
			size = ft_strncmp(str + 1, "2147483647", 10);
		else
			size = ft_strncmp(str, "2147483647", 10);
	}
	if (size <= 0 || i < 10)
		return (1);
	else
		return (0);
}

int	ft_is_valid_int(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}


int	main(int argc, char **argv)
{
	int	i;
	int	*num;

	i = 1;
	if (argc == 1)
		return (0);
	else
	{
		while (i < argc)
		{
			if (!ft_is_valid_int(argv[i]))
			{
				write(2, "Error\n", 6);
				return (0);
			}
			if (!ft_is_int_range(argv[i]))
			{
				write(2, "Error\n", 6);
				return (0);
			}
			i++;
		}
	}
	num = malloc(sizeof(int) * (argc - 1));
	if (!num)
		return (0);
	i = 0;
	while (i < (argc - 1))
	{
		num[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if (!ft_is_unique(num, argc - 1))
	{
		write(2, "Error\n", 6);
		free(num);
		return (0);
	}
	free(num);
	return (0);
}
