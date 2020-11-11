/*

  9 - Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
  formula de convers ´ ao˜ e:´ K = C + 273.15, sendo C a temperatura em Celsius e K a
  temperatura em Kelvin.

*/

#include<stdio.h>

int main(){

   float c, k;

   printf("-------------------------------------------------------------------------------------\n");
   printf("<<<<<< Este programa converte a temperatura de graus Celsius para graus Kelvin >>>>>>\n");
   printf("-------------------------------------------------------------------------------------\n");
   printf("\nDigite a temperatura em graus Celsius: ");
   scanf("%f", &c);

   k = c + 273.15;

   printf("A temperatura em graus Kelvin é: %.2f\n",k);
   printf("\nFIM DO PROGRAMA!!!\n");



  return 0;
}
