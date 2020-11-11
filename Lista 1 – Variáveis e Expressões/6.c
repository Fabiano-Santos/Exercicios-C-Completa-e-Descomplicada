/*
 
 6 - Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
 A formula de convers ´ ao˜ e: ´ F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
 e C a temperatura em Celsius.
 
 */

#include<stdio.h>

int main(){

   float c,f;

   printf("------------------------------------------------------------------------\n");
   printf("<<<<<< Este programa converte graus Celsius para graus Fahrenhreit >>>>>>\n");
   printf("------------------------------------------------------------------------\n");
   printf("\nDigite a temperatura em graus Celsius: ");
   scanf("%f", &c);

   f = c*(9.0/5.0)+32.0;

   printf("A temperatura em graus Fahrenheit é: \"%.1f\" \n", f);
   printf("FIM!!!\n");


 return 0;
}
