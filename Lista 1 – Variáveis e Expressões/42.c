/**************************************************************************************************
 *                                                                                                *
 *  42 - Receba o salário-base de um funcionário. Calcule e imprima o salário a receber,          *
 *       sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base.         *
 *       Aálem disso, ele paga 7% de imposto sobre o salário-base.                                *
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

    float sal_base, gratificacao,aux, sal_liquido;

    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este programa recebe o salário-base de um funcionário, calcula e imprime o liquido a receber  >>>>>>\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");

    printf("Digite o salário base do funcionário R$: ");
    scanf("%f",&sal_base);
 

    gratificacao = sal_base * 0.05;//Calcula o acrescimo de 5%
    sal_base = sal_base + gratificacao;//Salário + acrescimo
    aux = sal_base * 0.07;//Calcula o desconto de 7%
    sal_liquido = sal_base -aux;//Calcula o liquido a receber

    printf("O Salário com acrescimo de 5% é: \"R$ %.2f\"\n",sal_base);
    printf("O Desconto do imposto de renda é: \"R$ %.2f\"\n",aux);
    printf("O Salário liquido a receber é: \"R$ %.2f\"\n",sal_liquido);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
