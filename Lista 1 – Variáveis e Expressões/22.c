/**************************************************************************************************
 *                                                                                                *
 *  22 - Leia um valor de comprimento em jardas e apresente-o convertido em metros.               *
 *  A formula de conversão é: M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento     *
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
    printf("<<<<<< Este Programa lê um valor de comprimento em jardas e converte para metros >>>>>>\n");
    printf("---------------------------------------------------------------------------------------\n");
    printf("\nDigite o valor em jardas: ");
    scanf("%f", &j);

    m = 0.91 * j;

    printf("\"%.4f\"metro(s)\n", m);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
