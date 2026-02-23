#include <stdio.h>

#include "imprimePassos.c"

/* Uma funcao  que encontra o menor valor em um  array entre os indices
 * "a" e "b" (inclusive)
 */
int menor_indice(int v[], int a, int b)
{
  int i;
  int menor;

  menor = a;
  i = a+1;

  while (i <= b)
  {
    if ( v[i] < v[menor] )
    {
      menor = i;
    }
    i += 1;
  }
  
  return menor;
}


/* Uma funcao que troca os valores entre dois elementos de um array */
void troca_v( int vet[], int i, int j)
{
  int aux;
   
  aux = vet[i];
  vet[i] = vet[j];
  vet[j] = aux;
}

/* Uma funcao que ordena um array de inteiros usando o algoritmo de
 * Bubble sort.
 * Entrada:  array a ser ordenado -- lista[]
 *           tamanho do array -- tam
 */
void ordena(int lista[], int tam)
{
  int i,j,
      menor;    /* indice do menor valor no array entre i e tam-1 */
  
  i = 0;
  while (i < tam)
  {
    imprimePassos( lista, tam, i );

    menor = menor_indice( lista, i, tam-1 );
    troca_v( lista, i, menor );
    i += 1;
  }
}

