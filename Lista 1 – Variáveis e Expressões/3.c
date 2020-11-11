/*
 
   3 - Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

*/

#include<stdio.h>

int main(){

   int n1, n2, n3, soma;

   printf("Digite três numeros inteiros: ");
   scanf("%d %d %d", &n1, &n2, &n3);

   soma = n1 + n2 + n3;

   printf("A soma dos numeros é: \"%d\" \n", soma);


  return 0;
}
