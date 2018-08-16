//Author JHeroGHJP on GitHub.
//If you wish to help this repository, please send a message.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 21

void selectionSort (int vetor[])
{
    unsigned long long inicio, tempo;
    
    inicio = clock();
    
    int indiceMenor = 0;
    int aux;
    
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
        }
    }
    
    tempo = clock() - inicio;
    
    printf ("Vetor sortido. (%llu us)\n", tempo);
}

void preencher (int vetor[])
{
    unsigned long long inicio, tempo;
    
    inicio = clock();
    
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%tamanho;
    }
    
    tempo = clock() - inicio;
    
    printf ("Vetor preenchido. (%llu us)\n", tempo);
}

void mostrar (int vetor[])
{
    printf ("[");
    
    for (int i = 0; i < tamanho; i++)
    {
        printf (" %i ", vetor[i]);
    }
    
    printf ("]\n");
}

void main()
{
    srand (7);
    
    int vetor[tamanho];
    
    preencher (vetor);
    
    mostrar (vetor);
    
    selectionSort (vetor);
    
    mostrar (vetor);
}
