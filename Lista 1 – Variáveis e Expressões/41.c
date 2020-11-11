/**************************************************************************************************
 *                                                                                                *
 *  41 - Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas       *
 *       trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre     *
 *       o valor calculado.                          *
 *  by:                                                                                           *
 *     @@@@@ @  @ @      @   @@@@@ @@    @ @@@@@@    @@@@@@  @    @ @@    @ @@@@@@@ @@@@@ @@@@@   *
 *     @     @  @ @     @@   @   @ @ @   @ @    @    @       @    @ @ @   @    @    @   @ @       *
 *     @@@   @@@@ @@@@   @   @@@@@ @  @  @ @    @    @@@@@@  @@@@@@ @  @  @    @    @   @ @@@@@   *
 *     @        @ @  @   @   @   @ @   @ @ @    @         @       @ @   @ @    @    @   @     @   *
 *     @        @ @  @   @   @   @ @    @@ @    @         @       @ @    @@    @    @   @     @   *
 *     @        @ @@@@ @@@@@ @   @ @     @ @@@@@@    @@@@@@       @ @     @    @    @@@@@ @@@@@   *
 *                                                                                                *
 *  Data: 06/10/2020                                                                              *
 *                                                                                                *
 **************************************************************************************************/
#include<stdio.h>
#include<math.h>

int main(){

    float hora_trabalho, acrescimo, salario;
    int num_horas; 

    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este programa calcula o salário de um funcionário com base na qtd de dias e horas trabalhadas >>>>>>\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");

    printf("Digite o valor da hora de trabalho em R$: ");
    scanf("%f",&hora_trabalho );
 
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &num_horas);

    salario = hora_trabalho * num_horas;
    acrescimo = salario * 0.10;
    salario = salario + acrescimo;

    printf("O Salário com acrescimo é: \"%.2f\"\n",salario);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
