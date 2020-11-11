/**************************************************************************************************
 *                                                                                                *
 *  17 - Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.       *
 *  A formula de conversão é: P = C / 2,54, sendo C o comprimento em centímetros e P o            *
 *  comprimento em polegadas.                                                                     *
 *                                                                                                *
 *  by:                                                                                           *
 *     @@@@@ @  @ @      @   @@@@@ @@    @ @@@@@@    @@@@@@  @@@@@@ @@    @ @@@@@@@ @@@@@ @@@@@   *
 *     @     @  @ @     @@   @   @ @ @   @ @    @    @       @    @ @ @   @    @    @   @ @       *
 *     @@@   @@@@ @@@@   @   @@@@@ @  @  @ @    @    @@@@@@  @@@@@@ @  @  @    @    @   @ @@@@@   *
 *     @        @ @  @   @   @   @ @   @ @ @    @         @  @    @ @   @ @    @    @   @     @   *
 *     @        @ @  @   @   @   @ @    @@ @    @         @  @    @ @    @@    @    @   @     @   *
 *     @        @ @@@@ @@@@@ @   @ @     @ @@@@@@    @@@@@@  @    @ @     @    @    @@@@@ @@@@@   *
 *                                                                                                *
 *  Data: 02/10/2020                                                                              *
 *                                                                                                * 
 **************************************************************************************************/
#include<stdio.h>


int main(){

    float comp_pol, comp_cent;

    printf("-----------------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este Programa lê um valor de comprimento em centímetros e converte para polegadas >>>>>>\n");
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("\nDigite o comprimento em centímetros: ");
    scanf("%f", &comp_cent);

    comp_pol = comp_cent / 2.54;

    printf("\"%.6f\"polegadas\n", comp_pol);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
