#include <stdio.h>

int main(){

    int x = 10;
    int *ponteiro; //declaração de ponteiro para inteiro
    ponteiro = &x; //aponta para o endereço de memoria de x;

    printf("%d\n", &x);
    printf("%d\n", ponteiro); //printam o endereço de memória

    printf("%d\n", x);
    printf("%d\n", *ponteiro); //printam o conteúdo da memória

    int y = 20;
    *ponteiro = y; //endereço de memória x recebe valor de y;

    printf("%d %d", x, y);
}