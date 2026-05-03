#include <stdio.h>

int main(){

    int mes;

    printf("Escolha um mes (1-12): \n");
    scanf("%d", &mes);

    switch (mes){
        case 12: case 1: case 2: printf("Este mes e da estacao Verao"); break;
        case 3: case 4: case 5: printf("Este mes e da estacao Outono"); break;
        case 6: case 7: case 8: printf("Este mes e da estacao Inverno"); break;
        case 9: case 10: case 11: printf("Este mes e da estacao Primavera"); break;
        default: printf("Mes invalido"); break;
    }
        return 0;
}