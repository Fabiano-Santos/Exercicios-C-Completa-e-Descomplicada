/**************************************************************************************************
 *                                                                                                *
 *  47 - Leia um número inteiro de 4 digitos (1000 a 9999)e imprima 1 digito por linha.           *
 *                                                                                                *
 *    By:                                                                                         *
 *                                                                                                *
 *     @@@@@ @  @ @      @   @@@@@ @@    @ @@@@@@    @@@@@@  @    @ @@    @ @@@@@@@ @@@@@ @@@@@   *
 *     @     @  @ @     @@   @   @ @ @   @ @    @    @       @    @ @ @   @    @    @   @ @       *
 *     @@@   @@@@ @@@@   @   @@@@@ @  @  @ @    @    @@@@@@  @@@@@@ @  @  @    @    @   @ @@@@@   *
 *     @        @ @  @   @   @   @ @   @ @ @    @         @       @ @   @ @    @    @   @     @   *
 *     @        @ @  @   @   @   @ @    @@ @    @         @       @ @    @@    @    @   @     @   *
 *     @        @ @@@@ @@@@@ @   @ @     @ @@@@@@    @@@@@@       @ @     @    @    @@@@@ @@@@@   *
 *                                                                                                *
 *  Data: 07/10/2020                                                                              *
 *                                                                                                *
 **************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero, resto;
    

    printf("----------------------------------------------------------------------------------------------\n");
    printf("<<<<<<<< Este programa lê um número inteiro de 4 digitos e imprime 1 digito por linha >>>>>>>>\n");
    printf("----------------------------------------------------------------------------------------------\n");
         
    printf("Digite um número inteiro positivo de 4 digitos: ");
    scanf("%i", &numero);
 
    printf("%i\n", numero/1000);//Escreve numero / mil(por ser tipo int, só ikprime o primeiro digito)
    resto = numero % 1000;//Armazena o resto da divisão por mil
    numero = resto;//numero recebe resto 
    printf("%i\n",numero/100);//escreve numero dividido por cem(novamente imprime somento o primeiro digito, por se tratar de int)
    resto = numero % 100;//recebe o resto da divisão por 100
    numero = resto;//numero recebe resto
    printf("%i\n", numero/10);//Escver numero / 10
    resto = numero % 10;//recebe o resto da divisão
    numero = resto;//numero recebe resto
    printf("%i\n", numero);//imprime numero


    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
