/**************************************************************************************************
 *                                                                                                *
 *  35 - Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:         *
 *       hipotenusa = sqrt(a quadrado + b quadrado). Faça um programa que receba os valores de    *
 *       a e b, e calcule o valor da hipotenusa através da equação.Imprima o resultado            *
 *       dessa operação.                                                                          *
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

    double a, b, hipotenusa;

    printf("--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este programa lê os valores dos catetos A e B, e calcula a hipotenusa de um triângulo\n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("\nDigite o valor do cateto a:");
    scanf("%lf", &a);
    printf("Digite o valor do cateto b:");
    scanf("%lf", &b);

    //sqt() calcula raiz quadrada
    hipotenusa = sqrt( pow(a, 2) + pow(b,2));//pow calcula potencia 

    printf("O valor da hipotenusa é:  \"%.8lf\"\n",hipotenusa );
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
