/*
	Name: VetorBinario.cpp
	Author: Ryan Santos Fidelis
	Date: 14/05/26 11:08
	Description: Programa para carregar um vetor com elementos positivos e nagativos e copiar para um novo vetor transformando em binario
*/
#include <stdio.h>
#include <locale.h>

main()
{
	int n[12], binario[12], i;
	i = 0;
	setlocale(LC_ALL, "Portuguese");
	 
	puts("Carregue o vetor com 12 números:");
	for(i; i<12; i++){
		scanf("%d",&n[i]);
}	
		i = 0;
		while(i < 12){
			if(n[i] >= 0){
				binario[i] = 1;
			} else
				binario[i] = 0;
				i++;
		}
		
			puts("");
		//Conteudo do vetor n
		for(i = 0; i<12; i++){
			printf("%d|", n[i]);
		}
			puts("");
		for(i = 0; i<12; i++){
			printf("%d|", binario[i]);
		}
}
