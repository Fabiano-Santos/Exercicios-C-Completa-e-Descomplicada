/**************************************************************************************************
 *                                                                                                *
 *  23 - Leia um valor de comprimento em metros e apresente-o convertido em jardas.               *
 *  A formula de conversão é: J = M / 0.91, sendo J o comprimento em jardas e M o comprimento     *
 *  em metros.                                                                                    *
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

    float m, j;

    printf("---------------------------------------------------------------- ----------------------\n");
    printf("<<<<<< Este Programa lê um valor de comprimento em metros e converte para jardas >>>>>>\n");
    printf("---------------------------------------------------------------------------------------\n");
    printf("\nDigite o valor em metros: ");
    scanf("%f", &m);

    j = m / 0.91;

    printf("\"%.5f\"jarda(s)\n", j);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
