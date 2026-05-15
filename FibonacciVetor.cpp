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
prox = qtde = 0;
i = 2;

setlocale(LC_ALL, "Portuguese");

	printf("Quantos elementos de Fibonacci devo mostrar? ");
	scanf("%i",&qtde);
	int fib[qtde];
	
	fib[0] = ant;
	fib[1] = atual;
	while(i < qtde){
		prox = atual + ant;
		fib[i] = prox;
		ant = atual;
		atual = prox;
	i++;	
	}
	puts("\n\nConteudo do vetor fibonacci");
	for(i = 0; i<qtde; i++){
		printf("%d,", fib[i]);
		}
}


