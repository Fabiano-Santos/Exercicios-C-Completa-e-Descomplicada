/*
 
 7 - Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
 A formula de convers ´ ao˜ e: ´ C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
 e F a temperatura em Fahrenheit.

*/

#include<stdio.h>

int main(){

   float f, c;

   printf("--------------------------------------------------------------------------\n");
   printf("<<<<<<  Este programa converte graus Fahrenheit para graus Celsius  >>>>>>\n");
   printf("--------------------------------------------------------------------------\n");
   printf("\nDigite a temperatura em graus Fahrenheit: ");
   scanf("%f", &f);

   c = 5.0 * (f - 32.0)/9.0;

   printf("A temperatura em graus celsius é: %.4f\n", c);
   printf("\nFIM DO PROGRAMA!!!\n");


  return 0;
}

