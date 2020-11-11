/**************************************************************************************************
 *                                                                                                *
 *  44 - Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar         *
 *       subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para           *
 *       atingir seu objetivo.                                                                    *
 *                                                                                                *
 *  by:                                                                                           *
 *     @@@@@ @  @ @      @   @@@@@ @@    @ @@@@@@    @@@@@@  @    @ @@    @ @@@@@@@ @@@@@ @@@@@   *
 *     @     @  @ @     @@   @   @ @ @   @ @    @    @       @    @ @ @   @    @    @   @ @       *
 *     @@@   @@@@ @@@@   @   @@@@@ @  @  @ @    @    @@@@@@  @@@@@@ @  @  @    @    @   @ @@@@@   *
 *     @        @ @  @   @   @   @ @   @ @ @    @         @       @ @   @ @    @    @   @     @   *
 *     @        @ @  @   @   @   @ @    @@ @    @         @       @ @    @@    @    @   @     @   *
 *     @        @ @@@@ @@@@@ @   @ @     @ @@@@@@    @@@@@@       @ @     @    @    @@@@@ @@@@@   *
 *                                                                                                *
 *  Data: 04/10/2020                                                                              *
 *                                                                                                * 
 **************************************************************************************************/
#include<stdio.h>


int main(){

    float alt_degrau, alt_desejada, qtd_degraus;
   

    printf("----------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este programa lê a altura de um degrau e altura que o usuário deseja alcançar.   \n");
    printf("Calcula e mostra quantos degraus o usuário devera subir para atingir seu objetivo >>>>>>\n");
    printf("----------------------------------------------------------------------------------------\n");
    printf("\nDigite a altura do degrau: ");
    scanf("%f", &alt_degrau);

    printf("Digite a altura que deseja alcançar: ");
    scanf("%f", &alt_desejada);

    qtd_degraus = alt_desejada / alt_degrau;

    printf("\nVocê precisa subir: \"%.2f\" degraus para alcançar a altura.\n",qtd_degraus );
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
