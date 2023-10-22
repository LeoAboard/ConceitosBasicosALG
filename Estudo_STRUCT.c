#include <stdio.h>

int main()
{
    int n;
    float med = 0;

    scanf("%d", &n); //lê a quantidade de alunos

    struct{
        char nome[100];
        int mat;
        float nota;
    }aluno[n]; //estrutura que computa nome, numero de matricula e nota de n alunos

    for(int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", aluno[i].nome);
        scanf("%d", &aluno[i].mat);
        scanf("%f", &aluno[i].nota);
        med = med + aluno[i].nota;
    }

    med = med/n; //calcula a media de nota do aluno

    for(int i = 0; i < n; i++)
    {
        printf("%s \n%d \n%.2f", aluno[i].nome, aluno[i].mat, aluno[i].nota);
        printf("\n");
    }

    printf("%.2f", med);
    
    return 0;
}