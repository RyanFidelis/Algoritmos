/*
	Name: ParImparVetor.cpp
	Author: Ryan Santos Fidelis
	Date: 14/05/26 11:32
	Description: Progama para separar números pares dos ímpares e vetores específicos.
*/
#include <stdio.h>
#include <locale.h>

main(){
	int par[20], impar[20],n, p, i, cont;
	n = i = p = cont = 0;
	setlocale(LC_ALL, "Portuguese");
	
	puts("Program para separar números pares dos ímpares:");
	
	do {
		printf("%iº número: ",cont+1);
		scanf("%i",&n);
		if(n%2 == 0){
			par[p] = n;
			p++;
		}
		else{
			impar[i] = n;
			i++;
		}
		cont++;
} while(cont < 20);

	puts("\nConteudo do vetor par");
	cont = 0;
	while(cont < p){
		printf("%d|", par[cont]);
		cont++;
	}
	
	puts("\nConteudo do vetor impar");
	cont = 0;
	while(cont < i){
		printf("%d|", impar[cont]);
		cont++;
	}
}
