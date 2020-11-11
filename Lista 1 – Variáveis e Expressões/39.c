/**************************************************************************************************
 *                                                                                                *
 *  39 - A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.       *
 *       Sendo que da quantia total:                                                              *
 *       -> O primeiro ganhador receberá 46%;                                                     *
 *       -> O segundo receberá 32%;                                                               *
 *       -> O terceiro receberá o restante;                                                       *
 *       Calcule e imprima a quantia ganha por cada um dos ganhadores.                            *
 *  by:                                                                                           *
 *     @@@@@ @  @ @      @   @@@@@ @@    @ @@@@@@    @@@@@@  @    @ @@    @ @@@@@@@ @@@@@ @@@@@   *
 *     @     @  @ @     @@   @   @ @ @   @ @    @    @       @    @ @ @   @    @    @   @ @       *
 *     @@@   @@@@ @@@@   @   @@@@@ @  @  @ @    @    @@@@@@  @@@@@@ @  @  @    @    @   @ @@@@@   *
 *     @        @ @  @   @   @   @ @   @ @ @    @         @       @ @   @ @    @    @   @     @   *
 *     @        @ @  @   @   @   @ @    @@ @    @         @       @ @    @@    @    @   @     @   *
 *     @        @ @@@@ @@@@@ @   @ @     @ @@@@@@    @@@@@@       @ @     @    @    @@@@@ @@@@@   *
 *                                                                                                *
 *  Data: 05/10/2020                                                                              *
 *                                                                                                *
 **************************************************************************************************/
#include<stdio.h>
#include<math.h>

int main(){

    const float premio = 780000.00;
    float ganhador1, ganhador2, ganhador3;


    printf("----------------------------------------------------------------------------------\n");
    printf("<<<<<< Este programa calcula o valor do premio da loteria para 3 ganhadores >>>>>>\n");
    printf("----------------------------------------------------------------------------------\n");

    ganhador1 = premio * 0.46;
    ganhador2 = premio * 0.32;

    ganhador3 = premio - (ganhador1 + ganhador2);

    printf("O primeiro ganhador receberá: \"%.2f\"\n",ganhador1);
    printf("O segundo ganhador receberá: \"%.2f\"\n",ganhador2);
    printf("O terceiro ganhador receberá: \"%.2f\"\n", ganhador3);
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
