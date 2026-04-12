#include <stdio.h>

int main(){

    int mes;

    printf("Escolha um mes: \n");
    scanf("%d", &mes);

   switch (mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Esse mes tem 31 dias"); 
                break;
        case 4: case 6: case 9: case 11:
            printf("Esse mes tem 30 dias"); 
                break;
        case 2: printf("Esse mes tem entre 28 dias"); 
                break;
        default: printf("Mes invalido"); 
                break;
    }
    return 0;
}