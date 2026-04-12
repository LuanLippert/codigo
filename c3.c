#include <stdio.h>

int main(){

    int ano;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    if (ano %4 == 0 && ano %100 != 0 || ano %400 == 0){
        printf("O ano %d e um ano bissexto", ano);
    } else{
        printf("O ano %d nao e um ano bissexto", ano);
    }
         return 0;

}