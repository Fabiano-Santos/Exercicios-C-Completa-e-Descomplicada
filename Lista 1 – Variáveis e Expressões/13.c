/*

   13 - Leia uma distancia em quilometros e apresente-a convertida em milhas. A formula de 
   conversão é:  M = K/1,61 , sendo K a distancia em quilômetros e ˆ M em milhas.
By: Fabiano Santos
01/10/2020
*/

#include<stdio.h>

int main(){

   float conversor = 1.60934;//1 milha é 1.60934 kms 
   float distancia,  milha;

   printf("------------------------------------------------------------------------\n");
   printf("<<<<<< Este programa lê uma ditância de km e converte para milhas >>>>>>\n");
   printf("------------------------------------------------------------------------\n");
   printf("\nDigite a distancia em km: ");
   scanf("%f", &distancia);

   milha = distancia / conversor;

   printf("A distância em milhas é: %f\n ", milha);
   printf("\nFIM DO PROGRAMA!!!\n");


  return 0;
}
