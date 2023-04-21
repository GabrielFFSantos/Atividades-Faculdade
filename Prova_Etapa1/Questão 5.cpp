#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro {
    char titulo[50];
    int ano_edicao;
    int num_paginas;
    float preco;
};

int main()
{
    struct livro livros[5];
    float media_paginas = 0;

    printf("Digite os dados dos 5 livros:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("\n Livro %d:\n", i+1);

        printf("Titulo: ");
        fflush(stdin);
        fgets(livros[i].titulo, 50, stdin);

        printf("Ano de edicao: ");
        scanf("%d", &livros[i].ano_edicao);

        printf("Numero de paginas: ");
        scanf("%d", &livros[i].num_paginas);

        printf("Preco: ");
        scanf("%f", &livros[i].preco);

        media_paginas += livros[i].num_paginas;
    }

    media_paginas /= 5;

    printf("\n A media de paginas dos 5 livros e: %.2f\n", media_paginas);

    return 0;
}

