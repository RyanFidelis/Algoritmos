/*
	Name: FibonacciVetor.cpp 
	Author: Ryan Santos Fidelis
	Date: 14/05/26 12:05
	Description: Progama para carregar um vetor com os elementos Fibonacci
*/
#include <stdio.h>
#include <locale.h>

main(){
int atual,ant, prox, qtde, i;

ant = atual = 1;
prox = qtde = i = 0;

setlocale(LC_ALL, "Portuguese");

	printf("Quantos elementos de Fibonacci devo mostrar?");
	scanf("%i",&qtde);
	
	printf("%d,", ant);
	printf("%d,", atual);
	
	while(i < qtde - 2){
		prox = atual + ant;
		printf("%d,", prox);
		ant = atual;
		atual = prox;
	i++;	
	}
}


