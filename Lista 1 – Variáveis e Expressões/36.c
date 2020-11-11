/**************************************************************************************************
 *                                                                                                *
 *  36 - Laia a altura e o raio de um cilindro circular e imprima o volume do cilindro.           *
 *       O volume de um cilindro circular é calculado por meio da seguinte formula:               *
 *       V = PI * raio ao quadrado * altura, onde PI = 3.141592.                                  *
 *  by:                                                                                           *
 *     @@@@@ @  @ @      @   @@@@@ @@    @ @@@@@@    @@@@@@  @    @ @@    @ @@@@@@@ @@@@@ @@@@@   *
 *     @     @  @ @     @@   @   @ @ @   @ @    @    @       @    @ @ @   @    @    @   @ @       *
 *     @@@   @@@@ @@@@   @   @@@@@ @  @  @ @    @    @@@@@@  @@@@@@ @  @  @    @    @   @ @@@@@   *
 *     @        @ @  @   @   @   @ @   @ @ @    @         @       @ @   @ @    @    @   @     @   *
 *     @        @ @  @   @   @   @ @    @@ @    @         @       @ @    @@    @    @   @     @   *
 *     @        @ @@@@ @@@@@ @   @ @     @ @@@@@@    @@@@@@       @ @     @    @    @@@@@ @@@@@   *
 *                                                                                                *
 *  Data: 05/10/2020                                                                              *
 *                                                                                                *
 **************************************************************************************************/
#include<stdio.h>
#include<math.h>

int main(){

    double altura, raio, volume;
    const double PI = 3.141592;    

    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("<<<<<< Este programa lê a altura e o raio de um cilindro circular, calcula e imprime o volume do cilindro\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("\nDigite a altura do cilindro:");
    scanf("%lf", &altura);
    printf("Digite o raio do cilindro:");
    scanf("%lf", &raio);

    volume = PI * pow(raio,2) * altura;

    printf("O volume do cilindro circular é:  \"%.6lf\"\n",volume );
    printf("\n--------------------------------------------------------------------------------------------\n");
    printf("<<<<<< FIM DO PROGRAMA!!! >>>>>>");
    printf("\n--------------------------------------------------------------------------------------------\n");

  return 0;
}
