/*
	Name: FaixaEtaria.cpp
	Author: Ryan Santos Fidelis
	Date: 23/08/26 11:04
	Description: Programa para classificar idade
*/
#include <stdio.h>
#include <locale.h>

int lernum();
void classificador(int);
main(){
	setlocale(LC_ALL,"portuguese");
	char nome[15];
	int id = 0;
	
	printf("Digite o primeiro nome: ");
	scanf("%s",& nome);
	id = lernum();
	printf("%s você é um: ", nome);
	classificador(id);
}

int lernum(){
	int num = 0;
	
	printf("Digite a idade: ");
	scanf("%d", &num);
	return num;
}
void classificador(int id){
	if(id <= 2){
		printf("Bebê");
	}else if(id <= 12){
		printf("Criança");
	}else if(id <= 19){
		printf("Adolecente");
	}else if(id <= 59){
		printf("Adulto");
	}else if(id <= 90){
		printf("Idoso");
	}else if(id >= 91){
		printf("Matusalém");
	}else if(id <= -1){
		printf("Não aceitamos idade negativa");
	}
}
