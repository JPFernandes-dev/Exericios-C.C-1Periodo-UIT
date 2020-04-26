/*
    Calcule S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

#include <stdlib.h>
#include<stdio.h>

int main (){
    int x = 1, y = 1;
    float s = 0;
    
    for (y=1;y<50;y++)
    {
        s = s + (x / y) ;
        x = x+2;
    }
    
    printf("%f", s);

    system("pause");
    return 0;    
}