#include <stdio.h>

int main(){

    int opcao;
    int a;
    int b;
    
    printf("Escolha dois numeros: \n");
    scanf("%d %d", &a,&b);

    printf("Escolha uma das opcoes abaixo: \n");
    printf("1-Soma, 2- Subtracao, 3-Multiplicacao, 4-Divisao, 5-Sair!\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1: printf(" %d + %d = %d \n",a, b, a + b ); break;
    case 2: printf(" %d - %d = %d \n",a, b, a - b ); break;
    case 3: printf(" %d x %d = %d \n",a, b, a * b ); break;
    case 4: printf(" %d / %d = %d \n",a, b, a / b ); break;
    default:printf("Programa Encerrado!"); break;
    }

    return 0;
}

