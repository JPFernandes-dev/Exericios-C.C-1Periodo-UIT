/* Crie um sistema que crie que receba um número e imprima a
imagem a seguir. Caso o usuário digite 5:
xoxox
oxoxo
xoxox
oxoxo
xoxox
 */

#include<stdlib.h>
#include<stdio.h>

int main () {
    int num;

    do{ //Repete enquanto o usuario não digitar 5.
        printf("Digite um numero: ");
        scanf("%d", &num);
    }while (num != 5);

    printf("\n\txoxox\n\toxoxo\n\txoxox\n\toxoxo");
    
    printf("\n\n");
    system("pause");
    return 0;
}