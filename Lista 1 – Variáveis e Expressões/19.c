/**************************************************************************************************
 *                                                                                                *
 *  19 - Leia um valor de volume em litros  e apresente-o convertido em metros cúbicos.           *
 *  A formula de conversão é: M = L / 1000, sendo L o volume em litros e M o volume em            *
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
    printf("<<<<<< Este Programa lê um valor de volume em litros e converte para metros cúbicos >>>>>>\n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("\nDigite o valor em litros: ");
    scanf("%f", &l);

    m = l / 1000;

    printf("\"%.2f\"metro(s) cúbico(s)\n", m);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
