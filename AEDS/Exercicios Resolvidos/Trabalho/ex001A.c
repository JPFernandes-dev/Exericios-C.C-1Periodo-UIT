/**/

#include<stdio.h>
#include<stdlib.h>

float fatorial(float x){
    float num = 1;
    for(int i = x;i>0;i--){
        num = num * i;
    }

    return num;
}

int main () {
    float s;

    s = (5/1) + (4/fatorial(2)) + (3/fatorial(3)) + (2/fatorial(4)) + (1/fatorial(5));

    printf("Resultado de s: %.3f", s);

    printf("\n\n");
    system("pause");
    return 0;
}