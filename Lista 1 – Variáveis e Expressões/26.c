/**************************************************************************************************
 *                                                                                                *
 *  26 - Leia um valor em metros quadrados e apresente-o convertido em hectares.                  *
 *  A formula de conversão é: H = M * 0.0001, sendo M a área em metros quadrados e H               *
 *  a area em hectares.                                                                              *
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

    double h, m;

    printf("--------------------------------------------------------- --------------------------------\n");
    printf("<<<<<< Este Programa lê um valor de área em metros quadrados e converte em hectares >>>>>>\n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("\nDigite o valor metros: ");
    scanf("%lf", &m);

    h = m * 0.0001;

    printf("\"%.4lf\"hectare(s)\n", h);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
