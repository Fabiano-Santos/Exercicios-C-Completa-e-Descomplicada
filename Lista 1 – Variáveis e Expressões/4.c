/*

  4 - Leia um número real e imprima o resultado do quadrado desse número.

*/

#include<stdio.h>

int main(){

    float num;
    float quadrado;

    printf("<<< Este Programa lê um número real e imprime seu quadrado >>>\n");
    printf("Digite um número real: ");
    scanf("%f", &num);

    quadrado = num*num;

    printf("O quadrado de \"%.2f\" é: %.2f\n",num ,quadrado);

  return 0;
}
