/**************************************************************************************************
 *                                                                                                *
 *  24 - Leia um valor de área em metros quadrados e apresente-o convertido em acres.             *
 *  A formula de conversão é: A = M * 0.000247105, sendo M a área em metros quadrados e A         *
 *  a area em acres.                                                                              *
 *                                                                                                *
 *  by:                                                                                           *
 *     @@@@@ @  @ @      @   @@@@@ @@    @ @@@@@@    @@@@@@  @@@@@@ @@    @ @@@@@@@ @@@@@ @@@@@   *
 *     @     @  @ @     @@   @   @ @ @   @ @    @    @       @    @ @ @   @    @    @   @ @       *
 *     @@@   @@@@ @@@@   @   @@@@@ @  @  @ @    @    @@@@@@  @@@@@@ @  @  @    @    @   @ @@@@@   *
 *     @        @ @  @   @   @   @ @   @ @ @    @         @  @    @ @   @ @    @    @   @     @   *
 *     @        @ @  @   @   @   @ @    @@ @    @         @  @    @ @    @@    @    @   @     @   *
 *     @        @ @@@@ @@@@@ @   @ @     @ @@@@@@    @@@@@@  @    @ @     @    @    @@@@@ @@@@@   *
 *                                                                                                *
 *  Data: 04/10/2020                                                                              *
 *                                                                                                * 
 **************************************************************************************************/
#include<stdio.h>


int main(){

    double m, a;

    printf("--------------------------------------------------------- -----------------------------\n");
    printf("<<<<<< Este Programa lê um valor de área em metros quadrados e converte em acres >>>>>>\n");
    printf("---------------------------------------------------------------------------------------\n");
    printf("\nDigite o valor em metros quadrados: ");
    scanf("%lf", &m);

    a = m * 0.000247105;

    printf("\"%.9f\"acre(s)\n", a);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
