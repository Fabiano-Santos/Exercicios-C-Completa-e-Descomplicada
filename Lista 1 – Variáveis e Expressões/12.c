/*

  12 - Leia uma distancia em milhas e apresente-a convertida em quil ˆ ometros. A f ˆ ormula de ´
 conversao˜ e: ´ K = 1, 61 ∗ M, sendo K a distancia em quil ˆ ometros e ˆ M em milhas. 
By: Fabiano Santos 
01/10/2020
*/

#include<stdio.h>

int main(){

   float milhas, kmh;

   printf("-----------------------------------------------------\n");
   printf("<<<<<< Este programa converte milhas para km/h >>>>>>\n");
   printf("-----------------------------------------------------\n");
   printf("\nDigite a velocidade em milhas: ");
   scanf("%f", &milhas);

   kmh = milhas*1.61;

   printf("A velocidade é: %.1f Km\\h\n", kmh);
   printf("\nFIM DO PROGRAMA!!!\n");





  return 0;
}
