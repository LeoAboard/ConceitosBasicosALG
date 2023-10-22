#include <stdio.h>

int main()
{
    char nome[10];

    scanf("%[^\n]", nome);
    
    printf("%s", nome);

    return 0;
}