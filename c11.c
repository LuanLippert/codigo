#include <stdio.h>

int main(){

    char letra;

    printf("Digite uma letra: \n");
    scanf("%c", &letra);

    switch (letra){
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
        printf("A letra %c e Vogal.\n", letra); break;
    
    default: printf("A letra %c nao e vogal!\n", letra); break;
    }

    return 0;
    
}