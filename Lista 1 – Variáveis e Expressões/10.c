/*

   10 - Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s ˆ
   (metros por segundo). A formula de convers ´ ao˜ e: ´ M = K/3.6, sendo K a velocidade em
   km/h e M em m/s.

*/

#include<stdio.h>

int main(){

   float velocidade, ms;

   printf("----------------------------------------------------------------\n");
   printf("<<<<<< Este programa converte velocidade de km/h para m/s >>>>>>\n");
   printf("----------------------------------------------------------------\n");
   printf("\nDigite a velocidade em km/h: ");
   scanf("%f", &velocidade);

   ms = velocidade/3.6;

   printf("A velocidade é: \"%f\"m\\s \n", ms);
   printf("\nFIM DO PROGRAMA!!!\n");




  return 0;
}
