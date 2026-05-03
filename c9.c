#include <stdio.h>

int main(){

    int nota;

    printf("Digite sua nota 0-10: \n");
    scanf("%d", &nota);

    switch (nota){
    case 10: case 9: printf("A"); break;
    case 8: case 7: printf("B"); break;
    case 6: case 5: printf("C"); break;
    case 3: case 4: printf("D"); break;
    case 0: case 1: case 2: printf("E"); break;
    
    default: printf("Nota nao encontrada"); break;
    }
}