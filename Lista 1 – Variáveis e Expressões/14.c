/*

  14 - Leia um angulo em graus e apresente-o convertido em radianos. A fôrmula de conversão
       é:  R = G ∗ π/180, sendo G o angulo em graus e  R em radianos e π = 3.14.
By: Fabiano Santos
data: 01/10/2020

*/

#include<stdio.h>
#include<math.h>
#define PI 3.1415926535

int main(){
   
   float angulo, radianos;
   
   printf("---------------------------------------------------------------------------\n");
   printf("<<<<<< Este programa lê um ângulo em graus e converte em PI radianos >>>>>>\n");
   printf("---------------------------------------------------------------------------\n");
   printf("\nDigite o valor do ângulo: ");
   scanf("%f", &angulo);

   radianos = angulo * PI/180;

   printf("\"%.7f\" PI radianos.\n", radianos);
   printf("\nFIM DO PROGRAMA!!!\n");




  return 0;
}
