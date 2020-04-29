/**/

#include<stdlib.h>
#include<stdio.h>

int main () {
    float n;
    float s;

    printf("Digite o valor de n: ");
    scanf("%f", &n);

    for(float i=0;i<n;i++){
        s += (i+1)/(n-i);
    }

    printf("Resultado de s: %.2f", s);
    printf("\n\n");
    system("pause");
    return 0;
}