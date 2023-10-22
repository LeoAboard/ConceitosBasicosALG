#include <stdio.h>

int main()
{
    int cada, soma = 0, p;

    FILE* ptarq;
    FILE* ptarq2; //cria ponteiros para arquivos

    ptarq = fopen("entrada.txt", "r");
    ptarq2 = fopen("saida.txt", "w"); //aponta para arquivos e os abre

    for(int i = 0; p = fscanf(ptarq, "%d", &cada) != EOF; i++) //fscanf lê o conteudo de um arquivo, no caso da entrada.txt, os parametros são (ponteiro, tipo de variavel, variavel onde será armezenado)
    {
        soma = soma + cada;
    }

    fprintf(ptarq2, "%d", soma); // escreve o resultado no saida.txt


    return 0;
}