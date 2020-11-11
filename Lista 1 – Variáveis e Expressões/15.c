/****************************************************************************************
 *                                                                                      *
 *  15 - Leia um angulo em radianos e apresente-o convertido em graus. A fôrmula de     *
 *  conversão é: G = R ∗ 180/π, sendo G o angulo em graus e ˆ R em radianos e π = 3.14. * 
 *                                                                                      * 
 *                                                                                      *
 *  by: Fabiano Santos                                                                  *
 *  Data:02/10/2020                                                                     * 
 *                                                                                      *
 *                                                                                      *
 *                                                                                      *
 *                                                                                      *
 *                                                                                      *
 *                                                                                      *
 * **************************************************************************************/
#include<stdio.h>
#define PI 3.14159
int main(){

   float graus, radianos;

   printf("---------------------------------------------------------------------------\n");
   printf("<<<<<< Este programa lê um ângulo em radianos e converte para graus  >>>>>>\n");
   printf("---------------------------------------------------------------------------\n");
   printf("\nDigite o ângulo em radianos: ");
   scanf("%f", &radianos);

   graus = radianos *180/PI;

   printf("O ângulo é de \"%.4f\" graus\n", graus);
   printf("\nFIM DO PROGRAMA!!!\n");

  return 0;
}
