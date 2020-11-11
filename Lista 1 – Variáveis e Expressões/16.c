/**************************************************************************************************
 *                                                                                                *
 *  16 - Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.       *
 *  A formula de conversão é: C = P ∗ 2,54, sendo C o comprimento em centímetros e P o            *
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
    printf("<<<<<< Este Programa lê um valor de comprimento em polegadas e converte para centimetros >>>>>>\n");
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("\nDigite o comprimento em polegadas: ");
    scanf("%f", &comp_pol);

    comp_cent = comp_pol * 2.54;

    printf("\"%.2f\" centímetros\n", comp_cent);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
