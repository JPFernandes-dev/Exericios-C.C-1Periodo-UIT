/*
*/

#include<stdlib.h>
#include<stdio.h>

int main () {
    int num[6], divisor, i;

    for(i=0;i<6;i++){
        printf("Digite o %iº numero: ", i+1);
        scanf("%i", &num[i]);
    }

    printf("Digite o numero divisor: ");
    scanf("%d", &divisor);

    for(i=0;i<6;i++){
        if(num[i]%divisor == 0){
            printf("\n%d e divisivel por %d", num[i], divisor);
        }
    }

    printf("\n\n\n");
    system("pause");
    return 0;
}