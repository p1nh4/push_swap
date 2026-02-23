/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:56:21 by davidos-          #+#    #+#             */
/*   Updated: 2026/02/23 22:14:37 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_troca_pos(int *arr, int i);
int	ft_menor_num(int *arr, int x, int y);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int k;
	int	*num;

	// aloca espaco para vetor de ints
	num = malloc(sizeof(int) * (argc -1));
	if (!num)
		return(0);

	j = 0;
	// guarda os numeros em um vetor de ints
	while (j < argc - 1) //evita violacao de acesso (seg fault)
	{
		num[j] = atoi(argv[j + 1]); // evita usar nome do prog.
		j++;
	}

	i = 0;
	// percorre todo o vetor
	while (i < argc - 2) // nome do prog. + seg fault
	{
		k = 0;
		// compara um elemento, com todos os adjacentes do vetor
		while (k < (argc - i - 2))
		{
			ft_troca_pos(num, k);
			k++;
		}
		i++;
	}
	return (1);
}

// selection sort?
int	ft_menor_num(int *arr, int x, int y)
{
	int	i;
	int	menor;

	menor = x;
	i = x + 1;

	while (i <= y)
	{
		if (arr[i] < arr[menor])
			menor = i;
		i++;
	}
	return (menor);
}


void	ft_troca_pos(int *arr, int i)
{
	int	aux;

	// vef si o seguinte e maior que ele mesmo, se for faz a troca e imprime a operacao
	if (arr[i] > arr[i + 1])
	{
		aux = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = aux;
		printf("sa\n");
	}
}
