/*
 
  8 - Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
  formula de convers ´ ao˜ e:´ C = K − 273.15, sendo C a temperatura em Celsius e K a
  temperatura em Kelvin.

*/

#include<stdio.h>

int main(){

   float k, c;

   printf("--------------------------------------------------------------------\n");
   printf("<<<<<< Este programa converte graus Kelvin para graus Celsius >>>>>>\n");
   printf("\nDigite a temperaruta em graus Kelvin: ");
   scanf("%f", &k);

   c = k -273.15;

   printf("A temperatura em graus Celsius é: %.2f\n", c);
   printf("\nFIM DO PROGRAMA!!! \n");






   return 0;
}
