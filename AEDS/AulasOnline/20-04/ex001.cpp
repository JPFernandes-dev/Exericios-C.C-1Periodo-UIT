/**/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra[20], letraPesq=' ', letraTr =' ';

    printf("Digite uma palavra: ");
    fflush(stdin);
    scanf("%s", &palavra[20]);
    fflush(stdin);
    
    printf("Digite uma letra para procura: ");
    scanf("%c", &letraPesq);

    printf("Diite uma letra para troca: ");
    scanf("%c", &letraTr);

    for(int i = 0;i<20;i++){
        if(palavra[i] == letraPesq){
            palavra[i] = letraTr;
        }
    }

    printf("\n\nPalavra: %s", palavra[20]);

    printf("\n\n");
    system("pause");
    return 0;
}