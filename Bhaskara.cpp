/*
	Name: Bhaskara.cpp
	Author: Ryan Santos Fidelis
	Date: 01/09/26 10:16
	Description: Programa para calcular bhaskara
*/
#include <stdio.h>

float delta(float, float, float);

main(){
    float a, b, c, d;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    d = delta(a, b, c);

    printf("O valor de Delta e: %.2f", d);
}

float delta(float a, float b, float c){
    float resultado = 0.0;

    resultado = (b * b) - (4 * a * c);

    return resultado;
}
