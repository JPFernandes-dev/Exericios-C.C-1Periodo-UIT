/**/

#include<stdlib.h>
#include<stdio.h>

int main (){
    float massa, reduc;
    int i, contsec=0;

    printf("Digite a massa do produto: ");
    scanf("%f", &massa);

    while(massa>0.25){
        massa/=2;
        contsec++;
        
    }

    contsec = contsec * 30;

    printf("\nO produto demorou: %ds", contsec);

    printf("\n\n");
    system("pause");
    return 0;
}