/**************************************************************************************************
 *                                                                                                *
 *  32 - Leia um número inteiro e imprima a soma do sucessor de seu triplo                        *
 *       com o antecessor de seu dobro.                                                                                         *
 *                                                                                                *
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

    int num, ant_dobro, sucessor_triplo, resultado;
   

    printf("--------------------------------------------------------- ----------------- --------\n");
    printf("<<<<<< Este programa lê um número inteiro e imprime a soma do sucessor de seu triplo\n");
    printf("com o antecessor de seu dobro >>>>>>\n");
    printf("------------------------------------------------------------------------------------\n");
    printf("\nDigite um número inteiro:");
    scanf("%d", &num);

    ant_dobro = (2*num)-1;//antecessor do dobro
    sucessor_triplo = (3*num)+1;//Sucessor do triplo
    
    resultado = sucessor_triplo + ant_dobro;

    printf("O resultado é:  \"%d\"\n",resultado );
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
