#include <stdio.h>

int main()
{
    int n, soma;

    soma = 0;

    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < n; i++)
    {
        soma = v[i] + soma;
    }

    FILE* pont;
    pont = fopen("saida.txt", "w"); //abre o arquivo para "w" WRITE, pode ser "r" para READ

    fprintf(pont, "%d", soma); //função que printa no arquivo aberto

    fclose(pont); // fecha o arquivo

    return 0;
}