/**************************************************************************************************
 *                                                                                                *
 *  45 - Faça um programa para converter uma letra maiuscula em letra minúscula. Use a tabela     *
 *       ASCII para resolver o problema;                                                  *
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
#include<string.h>
#include<ctype.h>////biblioteca p/ as funções isalpha isdigit toupper tolower

int main(){

    char letra ; 

     printf("Digite uma letra do alfabeto: ");
       scanf("%c",&letra);
         
         //isalpha verifica se é uma letra do alfabeto
          if (isalpha(letra))
          {
          printf("\nVoce digitou a letra %c \n\n",letra);
                     
         //toupper transforma em maiuscula
         //letra = toupper(letra);
         //printf("Maiuscula: %c \n\n",letra);
                                     
         //tolower transforma em minuscula
          letra = tolower(letra);
          printf("Minuscula: %c \n\n",letra);
          }


    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
