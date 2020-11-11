/**************************************************************************************************
 *                                                                                                *
 *  46 - Faça um programa que leia um número inteiro positivo de três digitos (de 100 a 999)      *
 *       Gere outro número formado pelos dígitod invertidos do número. Exemplo:                   *
 *         NumeroLido = 123                                                                       *
 *         NúmeroGerado = 321                                                                     *
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

    unsigned int num, cifra;
    printf("-----------------------------------------------------------------------------------\n");
    printf("<<<<<<<< Este programa lê um número inteiro positivo e imprime seu inverso >>>>>>>>\n");
    printf("-----------------------------------------------------------------------------------\n");
         
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if(num >=0){//Se numero positivo
     do{
       cifra = num % 10;//cifra é igual a sobra da divisão de num por 10
       printf("%i", cifra);//Escrve a cifra
       num /= 10;//Divide por 10
     }while (num != 0);//Faz o ciclo enquanto num for 0(para quando atingir 0)
    printf("\n"); 


    } 

    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
