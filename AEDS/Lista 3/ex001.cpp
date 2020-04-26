#include<stdio.h>
#include<stdlib.h>

int main (){
    int x, y, num;
    printf("Digite um numero: ");
    scanf("%i", &x);
    num = x;
    y = x;
    if (num != 0){
        for (;;){
                y--;
                if (y == 0) { break; }
                x = x*y;
        }   
    printf("%i! = %i",num, x);
    }

    else {
        printf("0! = 1");
    }

    printf("\n\n");
    system("pause");
    return 0;
}