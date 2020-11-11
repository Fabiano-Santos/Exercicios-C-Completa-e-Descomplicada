/**************************************************************************************************
 *                                                                                                *
 *  20 - Leia um valor de massa em quilogramas  e apresente-o convertido em libras.               *
 *  A formula de conversão é: L = K / 0.453592, sendo K a massa em quilogramas e L a massa        *
 *  em libras.                                                                                    *
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

    float l, k;

    printf("---------------------------------------------------------------- ----------------\n");
    printf("<<<<<< Este Programa lê um valor de massa em quilogramas e converte libras >>>>>>\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("\nDigite o valor em quilogramas: ");
    scanf("%f", &k);

    l = k / 0.453592;

    printf("\"%.3f\"libra(s)\n", l);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
