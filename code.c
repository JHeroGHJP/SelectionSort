//Author JHeroGHJP on GitHub.
//If you wish to help this repository, please send a message.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 20

void mostrar (int vetor[])
{
    printf ("[");
    
    for (int i = 0; i < tamanho; i++)
    {
        printf (" %i ", vetor[i]);
    }
    
    printf ("]\n");
}

void selectionSort (int vetor[])
{
    int indiceMenor = 0;
    int aux;
    int trocas = 0;
    
    for (int i = 0; i < tamanho - 1; i++)
    {
        indiceMenor = i;
        
        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[indiceMenor])
            {
                indiceMenor = j;
            }
        }
        
        if (vetor[i] != vetor[indiceMenor])
        {
            aux = vetor[i];
            vetor[i] = vetor[indiceMenor];
            vetor[indiceMenor] = aux;
            
            trocas++;
        }
    }
    
    printf ("Vetor ordenado! (%i trocas)\n", trocas);
}

void preencher (int vetor[])
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%tamanho;
    }
}

void main()
{
    srand ((time (NULL)));
    
    int vetor[tamanho];
    
    preencher (vetor);
    
    mostrar (vetor);
    
    selectionSort (vetor);
    
    mostrar (vetor);
}
