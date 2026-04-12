#include <stdio.h>
#include <math.h> // necssaria para a função sqrt()

int main(){

    float a,b, c, delta, x1, x2;

    printf("Digite os valores de a, b e c:\n");
    scanf("%f %f %f", &a ,&b, &c);

    delta = (b * b) - (4 * a * c); //calculo do delta

    //variações das condições delta abaixo
    if (delta < 0) {
        printf("A equacao nao possui raizes reais (Delta negativo),\n");
    } else{
        // Calculo de x1 e x2
        x1 = (-b + sqrt(delta)) / (2 * a); //Esta é a função de "sqrt - Square Root" (Raiz Quadrada). Ela vem da biblioteca <math.h>
        x2 = (-b - sqrt(delta)) / (2 * a);

        if (delta == 0){
            printf("A equacao possui uma raiz leal dupla: %.2f", x1);
        }else{              
            printf("As raizes sao: x1 = %.2f e x2 = %.2f\n", x1, x2);



        }
        

    }

}


