// NÃO FINALIZADO //

#include <stdlib.h>
#include<stdio.h>

int main (){
    int x = 1, y = 1, somaY = 3;
    float s = 0, sSub = 0;
    
    for (x=1;x<10;x++)
    {
        if (x%2 == 1){
            s = s + (x/ x^2);
        }
        else {
            s = s - (x/ x^2);
        }
    }
    
    printf("%9.7f", s);

    system("pause");
    return 0;    
}