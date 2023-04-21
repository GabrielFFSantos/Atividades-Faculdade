#include <stdio.h>

int maiorNumero(int vetor[], int tamanho);

int main()
{
    int vetor[5];
    int i;

    printf("Digite 5 numeros inteiros:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("O maior numero e: %d", maiorNumero(vetor, 5));

    return 0;
}

int maiorNumero(int vetor[], int tamanho)
{
    int i;
    int maior = vetor[0];

    for(i = 1; i < tamanho; i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}

