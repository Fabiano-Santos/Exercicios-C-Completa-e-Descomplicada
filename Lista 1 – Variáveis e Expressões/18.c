/**************************************************************************************************
 *                                                                                                *
 *  18 - Leia um valor de volume em metros cúbicos e apresente-o convertido em litros.            *
 *  A formula de conversão é: L = 1000 * M, sendo L o volume em litros e M o volume em            *
 *  metros cúbicos.                                                                               *
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

    float l, m;

    printf("------------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este Programa lê um valor de volume em metros cúbicos e converte para litros >>>>>>\n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("\nDigite o valor em metros cúbicos: ");
    scanf("%f", &m);

    l = 1000 * m;

    printf("\"%.0f\"litros\n", l);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
