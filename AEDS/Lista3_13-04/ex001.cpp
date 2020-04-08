#include<stdio.h>
#include<stdlib.h>

int main (){
    int x, y, num;
    printf("Digite um numero: ");
    scanf("%i", &x);
    num = x;
    y = x;
    for (;;){
            y--;
            if (y == 0) { break; }
            x = x*y;
    }
    
    printf("%i! = %i",num, x);
    system("pause");
    return 0;
}