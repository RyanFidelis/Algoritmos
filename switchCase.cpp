/*
	Name: switchCase.cpp
	Author: Ryan Santos Fidelis
	Date: 28/10/26 11:06
	Description: Programa para demostrar a multipla escolha por meio do switchCase
*/

#include<stdio.h>
#include<windows.h>

main(){
	int opc;
	while(1){
	printf("1 - escolheu o numero 1\n 2 - escolheu o 2\n 2 - escolheu o 3\n99 - Encerar o programa\n");
	printf("Escolha sua opcao: ");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1: puts("Digitou 1");
		break;
		
		case 2: puts("Digitou 2");
		break;
		
		case 3: puts("Digitou 3");
		break;
		
		case 99: exit(0);
		
		default: puts("Opcao invalida");
	}
	system("pause");
	system("cls");
}
}

