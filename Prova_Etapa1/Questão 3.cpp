#include <stdio.h>

int main()
{
    int matriz[4][8];
    int somalinha[4] = {0};
    int i, j;

    printf("Digite os valores da matriz 4x8:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 8; j++)
        {	
        	printf("Digite o %d numero: \n", j);
            scanf("%d", &matriz[i][j]);
            somalinha[i] += matriz[i][j];
        }
    }

    printf("Valores da matriz:\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 8; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Valor somade de cada linha da matriz:\n");

    for(i = 0; i < 4; i++)
    {
        printf("%d ", somalinha[i]);
    }

    return 0;
}

