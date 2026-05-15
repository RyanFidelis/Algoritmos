/*
	Name: Vetor1.cpp
	Author: Ryan Santos Fidelis
	Date: 14/05/26 10:18
	Description: Progrma para realizar operações com arrays unidimensionais(vetores)
*/
#include <stdio.h>
#include <locale.h>

main(){
	int vet[10], i;
	
	i = 0;
	
	setlocale(LC_ALL, "Portuguese");
	puts("Digite 10 números inteiros: ");
	
	do {
		printf("Digite o %dº Número:", i+1);
		scanf("%i",&vet[i]);
		i++;
} while(i < 10);

	i = 0;
	
	puts("\n\n Conteúdo do vetor");
	while(i < 10) {
		printf("%d|", vet[i]);
		i++;
}

	puts("\n\n Conteúdo do vetor ao contrario:");
	for(i = 9; i >= 0; i--){
		printf("%dº|",i);
		printf("\n");
		printf("%d|", vet[i]);
	}
	
	
}
