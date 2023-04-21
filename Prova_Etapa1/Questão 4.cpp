#include <stdio.h>

int main()
{
    float notas[10][3];
    float menor_nota;
    int i, j;

    printf("Digite as notas dos 10 alunos:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Digite as 3 notas do aluno %d\n", i+1);

        for(j = 0; j < 3; j++)
        {
            printf("Nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n A menor nota de cada aluno foi:\n");

    for(i = 0; i < 10; i++)
    {
        menor_nota = notas[i][0];

        for(j = 1; j < 3; j++)
        {
            if(notas[i][j] < menor_nota)
            {
                menor_nota = notas[i][j];
            }
        }

        printf("Aluno %d: %.2f\n", i+1, menor_nota);
    }

    return 0;
}

