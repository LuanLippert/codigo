#include <stdio.h>

int main(){

    int a, b, c;

    printf(" Digite tres numero:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c && b < c){
        printf("%d %d %d", a, b, c);
    } else if(b < a && b < c && a < c){
        printf("%d %d %d", b, a, c);
    }else if(c < a && c < b && a < b){
        printf("%d %d %d", c, a, b);
    }else{
        printf("%d %d %d",c, b, a);
    }
         return 0;
    }
