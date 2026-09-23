/*
	Name: Determinante.cpp
	Author: Ryan Santos Fidelis
	Date: 22/09/26 10:34
	Description: Programa para calcular o determinante de uma matriz 3x3
*/

#include<stdio.h>
#include<locale.h>

//Prototipação
void carregarMatriz(float [][3]);
float calcularDeterminante(float [][3]);
void analisarDeterminante(float);

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float mat[3][3];
	float determinante;
	
	carregarMatriz(mat);
	
	determinante = calcularDeterminante(mat);
	
	analisarDeterminante(determinante);
}

void carregarMatriz(float M[][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Digite o valor da matriz[%d][%d]: ", i, j);
			scanf("%f",&M[i][j]);
		}
	}
}

float calcularDeterminante(float M[][3]){
	float positivo;
	float negativo;
	float determinante;
	
	positivo = (M[0][0] * M[1][1] * M[2][2]) +
			   (M[0][1] * M[1][2] * M[2][0]) +
			   (M[0][2] * M[1][0] * M[2][1]);
	
	negativo = (M[0][2] * M[1][1] * M[2][0]) +
			   (M[0][0] * M[1][2] * M[2][1]) +
			   (M[0][1] * M[1][0] * M[2][2]);
	
	determinante = positivo - negativo;
	
	return determinante;
}

void analisarDeterminante(float determinante){
	if(determinante > 0){
		printf("\nDeterminante POSITIVO cujo valor é igual a %.1f\n",determinante);
	}
	else if(determinante < 0){
		printf("\nDeterminante NEGATIVO cujo valor é igual a %.1f\n",determinante);
	}
	else{
		printf("\nDeterminante igual a ZERO cujo valor é igual a %.1f\n",determinante);
	}
}
