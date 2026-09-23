/*
	Name: Funcao_IMC.cpp
	Author: Ryan Santos Fidelis
	Date: 21/08/26 11:02
	Description: Progrma para ler o nome e calcular o imc de uma pessoa por meio de funcao
*/
#include <stdio.h>
#include <locale.h>

float CalcularIMC(float, float);

main(){
	setlocale(LC_ALL,"portuguese");
	char nome[20];
	float peso, alt, calculo;
	peso = alt= calculo = 0.0;
	
	printf("Digite seu primeiro nome: ");
	scanf("%s",&nome);
	printf("Digite seu peso:");
	scanf("%f",&peso);
	printf("Digite sua altura:");
	scanf("%f",&alt);
	printf("\nOlá, %s \n", nome);
	calculo = CalcularIMC(peso,alt);
	printf("Seu peso e altura atual é de: %.2fKg e %.2fm \n", peso, alt);
	printf("Com essas informações o seu IMC atual está: %.2f\n", calculo);
	
	
}

float CalcularIMC(float peso, float altura){
	float cal = 0.0;
	cal = peso / (altura * altura);
	return cal;
	}
