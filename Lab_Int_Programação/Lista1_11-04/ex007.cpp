/*
    O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:
                    Até 5 Kg            Acima de 5 Kg
    File Duplo      R$ 4,90 por Kg      R$ 5,80 por Kg
    Alcatra         R$ 5,90 por Kg      R$ 6,80 por Kg
    Picanha         R$ 6,90 por Kg      R$ 7,80 por Kg

    Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção, porém não há limites para a quantidade de carne por cliente. Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de 5% sobre o total a compra. Escreva um programa que peça o tipo e a quantidade de carne comprada pelo usuário e gere um cupom fiscal, contendo as informações da compra: tipo e quantidade de carne, preço total, tipo de pagamento, valor do desconto e valor a pagar
*/

#include<stdio.h>
#include<stdlib.h>


int main () {
    float peso = 0, valor = 0, desconto = 0, ValorFinal = 0;
    int carne = 0, pagamento = 0;
    char tipoCarne[20], tipoPagamento[30];

    printf("==========+ HIPERMERCADO TABAJARA +==========\n");

    printf("\nQual tipo de carne: \n File Duplo: [1]\n Alcantra: [2]\n Picanha: [3]\nR.: ");
    scanf("%d", &carne);

    printf("\nDigite o peso em kg: ");
    scanf("%f", &peso);

    if(peso <= 5){
        if(carne == 1){
            valor = peso * 4.9;
            tipoCarne[11] = 'File Duplo';

        }

        else if(carne == 2){
            valor = peso * 5.9;
            tipoCarne[8] = 'Alcatra';
        }

        else {
            valor = peso * 6.9;
            tipoCarne[8] = 'Picanha';
        }
    }

    else{
        if(carne == 1){
            valor = peso * 5.8;
            tipoCarne[11] = 'File Duplo';
        }

        else if(carne == 2){
            valor = peso * 6.8;
            tipoCarne[11] = 'Alcatra';

        }

        else {
            valor = peso * 7.8;
            tipoCarne[11] = 'Picanha';
        }
    }

    printf("\nForma de Pagamento\nCartao Tabajara (5%% de desc): [1]\nDinheiro / Cartao comum: [2]\nR.: ");
    scanf("%d", &pagamento);

    if(pagamento == 1) { 
        ValorFinal = valor * 0.95; 
        desconto = valor * 0.05;
        char tipoPagamento[30] = "Cartao Tabajara";
    }

    else{
        desconto = 0;
        ValorFinal = valor;
        char tipoPagamento[30] = "Cartao Comum ou Dinheiro";
    }

    system("cls");

    printf("\n+==========+ CUPOM FISCAL +==========+\nTipo de Carne: %s\nQuantidade: %4.fkg\n----------------------------------------------------------------\nValor total: R$%.2f     Forma de Pagamento: %s      Desconto: R$%.2f\n----------------------------------------------------------------\nValor a pagar: R$%.2f\n+==============================================================+\n                      Volte Sempre! :)",tipoCarne, peso, valor, tipoPagamento, desconto, ValorFinal);

    printf("\n\n\n");
    system("pause");
    return 0; 
}