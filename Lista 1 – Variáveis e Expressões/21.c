/**************************************************************************************************
 *                                                                                                *
 *  21 - Leia um valor de massa em libras e apresente-o convertido em quilogramas.                *
 *  A formula de conversão é: K = L * 0.453592, sendo K a massa em quilogramas e L a massa        *
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

    printf("---------------------------------------------------------------- ---------------------\n");
    printf("<<<<<< Este Programa lê um valor de massa em libras e converte para quilogramas >>>>>>\n");
    printf("--------------------------------------------------------------------------------------\n");
    printf("\nDigite o valor em libras: ");
    scanf("%f", &l);

    k = l * 0.453592;

    printf("\"%.3f\"quilograma(s)\n", k);
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
