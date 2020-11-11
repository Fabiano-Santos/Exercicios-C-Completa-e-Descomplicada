/*

  11 - Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
  (quilometros por hora). A f ˆ ormula de convers ´ ao˜ e: ´ K = M ∗ 3.6, sendo K a velocidade
  em km/h e M em m/s.
By: Fabiano Santos
*/

#include<stdio.h>

int main(){

   float ms, kmh;

   printf("------------------------------------------------------------------\n");
   printf("<<<<<< Este programa converte a velocidade de m/s para km/h >>>>>>\n");
   printf("------------------------------------------------------------------\n");
   printf("\nDigite a velocidade em m/s: ");
   scanf("%f", &ms);

   kmh = ms*3.6;

   printf("A velocidade em km/h é: %f\n", kmh);
   printf("\nFIM DO PROGRAMA!!!\n");




  return 0;
}
