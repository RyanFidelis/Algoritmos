/*
	Name: RecursaoII.cpp
	Author: Ryan Santos Fidelis 
	Date: 28/10/26 09:59
	Description:  Programa para deemostrar a recursividade INDIRETA	
	*/
	
#include<stdio.h>
#include<locale.h>

void lerNum();
void analisarNum(int);

main(){
	setlocale(LC_ALL,"portuguese");
	lerNum();
}

void lerNum(){
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	analisarNum(num);
}

void analisarNum(int num){
	if(num <= 0){
		return;
	}
	if(num%2 == 0){
	puts("Número par");
}
	else{
	puts("Número impar");
}
	lerNum();
}
