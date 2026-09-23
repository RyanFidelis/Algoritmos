/*
	Name: ContagemRegressiva.cpp
	Author: Ryan Santos Fidelis
	Date: 21/08/26 11:02
	Description: Progrma para ler o nome e calcular o imc de uma pessoa por meio de funcao
*/
#include <stdio.h>
#include <locale.h>

int contagem(int);

main(){
	setlocale(LC_ALL,"portuguese");
	int num = 0;
	
	puts("Esse programa serve para uma contagem regressiva");
	printf("Escolha o número para começar a contagem: ");
	scanf("%d",&num);
	contagem(num);
	}
	
int contagem(int num2){
	for( int i = num2; i >= 0; i--){
		printf("%d \n", i);
		if(i == 0 ){
			printf("FOGOOOOOOO!!!!!");
		}	
	}
}
