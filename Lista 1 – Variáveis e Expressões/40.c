/**************************************************************************************************
 *                                                                                                *
 *  40 - Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite      *
 *       o número de dias trabalhados pelo encanador e imprima a quantia liquida que deverá ser   *
 *       paga, sabendo-se que são descontados 8% para impostos de renda.                          *
 *  by:                                                                                           *
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
#include<math.h>

int main(){

    float diaria = 30.00;
    int dias_trabalhados; 
    float liquido, bruto, imposto;

    printf("------------------------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este programa recebe a quantidade de dias trabalhados e calcula o salário e os descontos >>>>>>\n");
    printf("------------------------------------------------------------------------------------------------------\n");

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d",&dias_trabalhados );
 
    bruto = dias_trabalhados * diaria;//Salario Bruto

    imposto = bruto*0.08;//Calcula o desconto do imposto de renda 

    liquido = bruto - imposto;

    printf("\nO Salario Bruto é: \"%.2f\"\n",bruto);
    printf("O desconto do imposto de renda é: \"%.2f\"\n",imposto);
    printf("Liquido à receber: \"%.2f\"\n", liquido);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
