/*
 
  5 - Leia um número real e imprima a quinta parte deste número.

*/

#include<stdio.h>

int main(){

   float num;
   float quintaparte;

   printf("-------------------------------------------------------------------------------\n");
   printf("<<<< Este programa lê um número real e imprime a quinta parte deste número >>>>\n");
   printf("-------------------------------------------------------------------------------\n");
   printf("\nDigite um número real: ");
   scanf("%f", &num);

   quintaparte = num/5;

   printf("A quinta parte do número %f é: %f \n", num, quintaparte );


  return 0;
}

