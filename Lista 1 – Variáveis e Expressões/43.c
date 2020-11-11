/**************************************************************************************************
 *                                                                                                *
 *  43 - Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:   *
 *       -> O total a pagar com desconto de 10%;                                                  *
 *       -> O valor de cada parcela, no parcelamento de 3x sem juros;                             *
 *       -> A comissão do vendedor, no caso da venda a vista(5% sobre o valor com desconto);      *
 *       -> A comissão do vendedor, no caso da venda ser parcelada(5% sobre o valor total);       *
 *    By:                                                                                         *
 *                                                                                                *
 *     @@@@@ @  @ @      @   @@@@@ @@    @ @@@@@@    @@@@@@  @    @ @@    @ @@@@@@@ @@@@@ @@@@@   *
 *     @     @  @ @     @@   @   @ @ @   @ @    @    @       @    @ @ @   @    @    @   @ @       *
 *     @@@   @@@@ @@@@   @   @@@@@ @  @  @ @    @    @@@@@@  @@@@@@ @  @  @    @    @   @ @@@@@   *
 *     @        @ @  @   @   @   @ @   @ @ @    @         @       @ @   @ @    @    @   @     @   *
 *     @        @ @  @   @   @   @ @    @@ @    @         @       @ @    @@    @    @   @     @   *
 *     @        @ @@@@ @@@@@ @   @ @     @ @@@@@@    @@@@@@       @ @     @    @    @@@@@ @@@@@   *
 *                                                                                                *
 *  Data: 05/10/2020                                                                              *
 *                                                                                                *
 **************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float total, desconto, parcelado, aux,comissao_avista, comissao_parcelado; 

    printf("------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este programa lê o valor de uma venda e calcula a comissão do vendedor >>>>>>\n");
    printf("------------------------------------------------------------------------------------\n");

    printf("Digite o valor total da venda R$: ");
    scanf("%f", &total);

    desconto = total * 0.10;//Calcula o desconto
    parcelado = total / 3;//Calcula o valor da parcela
    aux = total - desconto;//Aulilia no calculo da comissao em caso de desconto
    comissao_avista = aux * 0.05;//Calcula a comissão a vista
    comissao_parcelado = total * 0.05;//Calcula a comissão no parcelamento

    
    printf("Total a pagar com desconto é: \"R$ %.2f\"\n",total - desconto);
    printf("No parcelamento o valor da parcela é: \"R$ %.2f\"\n",parcelado);
    printf("A comissão do vendedor na venda á vista é: \"R $%.2f\"\n", comissao_avista);
    printf("A comissão do vendedor na venda parcelada é: \"R $%.2f\"\n", comissao_parcelado);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
