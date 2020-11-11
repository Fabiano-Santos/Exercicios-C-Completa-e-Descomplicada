/**************************************************************************************************
 *                                                                                                *
 *  27 - Leia um valor em hectares e apresente-o convertido em metros quadrados.                  *
 *  A formula de conversão é: M = H * 10000, sendo M a área em metros quadrados e H              *
 *  a area em hectares.                                                                           *
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

    float h, m;
    int auxiliar;

    printf("--------------------------------------------------------- --------------------------------\n");
    printf("<<<<<< Este Programa lê um valor de área em hectares e converte em metros quadrados >>>>>>\n");
    printf("------------------------------------------------------------------------------------------\n");
    printf("\nDigite o valor em hectare(s): ");
    scanf("%f", &h);

    m = h * 10000;
   
    //Se a entrada em hectare for inteiro a saída sera inteiro, senão será float 
    auxiliar = m;

    if(auxiliar == m){

    printf("\"%d\"metros(s)\n", auxiliar);
    
    }else{
    
      printf("\"%f\"metro(s)\n", m);
    }
    printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
