/*
    Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:
    a - Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
    b - Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e encerre o programa;
    c - Se o delta calculado for igual a zero a equação possui apenas uma raiz real informe-a ao usuário;
    d - Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;

*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    if(a == 0){
        printf("equação não é do 2o grau.");
        system("pause");
        exit(0);
    }

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - (4*b*c);
    if (delta < 0) {
        printf("\nEquação não possui raizes reais");
        system("pause");
        exit(0);
    }

    x1 = (-b + sqrt(delta))/2*a;
    x2 =  (-b - sqrt(delta))/2*a;

    if (x1 > 0){
        printf("\nRaiz 1: %2.f", x1);
    }

    if(x2 > 0){
        printf("\nRaiz 2: %2.f", x2);
    }

    printf("\n\n");
    system("pause");
    return 0;
}