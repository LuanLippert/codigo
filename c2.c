#include <stdio.h>

int main(){

    int n1;
    //int n2;

    printf("Escolha um numeros:");
    scanf("%d", &n1);

    if ( n1 % 2 == 0){
        printf("O numero %d e par\n", n1);
    }else{
        printf("O numero %d e impar\n", n1);
    }

     return 0;
}
