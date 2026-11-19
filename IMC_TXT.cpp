/*
	Name: IMC_TXT.cpp
	Author: Ryan Santos Fidelis
	Date: 18/11/26 10:05
	Description: Progrma para calcular o IMC e gravar o resultado em um arquivo
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	FILE *arq = fopen("prontuario.txt","w");
	if(arq == NULL){
		perror("Erro ao abrir arquivo!!");
		return 1;
	}
	char nome[20];
	float peso, alt, IMC;
	peso = alt = IMC = 0.0;
	for(int i = 0; i <= 5; i++){
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	printf("Digite sua altura: ");
	scanf("%f",&alt);
	IMC = peso / (alt * alt);
	fprintf(arq,"%s IMC de: %.2f\n", nome, IMC);
}
	puts("Operação realizada com sucesso!");
}
