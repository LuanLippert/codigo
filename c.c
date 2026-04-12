#include <stdio.h>

int main(){

    char* nome;

    int n1;
    int n2;
    int soma;

    printf("Qual o seu nome?\n");
    scanf("%s" , nome);

    printf("Ola %s, seja bem vindo!!\n", nome);
    printf("Escolha dois numeros para serem somados: ");
    scanf("%d %d", &n1 ,&n2);

     soma = n1 + n2;

     printf("A soma dos numeros escolhidos foi: %d\n", soma);


    return 0;
}