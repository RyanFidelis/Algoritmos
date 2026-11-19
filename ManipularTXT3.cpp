/*
	Name: ManipularTXT3.cpp
	Author: Ryan Santos Fidelis
	Date: 18/11/26 09:20
	Description: Progrmaa para adicionar texto a um arquivo já existente
*/

#include <stdio.h>

int main(){
	FILE *arq= fopen("Alunos.txt", "a"); //append
	if(arq == NULL){
		perror("Erro ao abrir arquivo!!");
		return 1;
	}
	
	fprintf(arq,"\n\n=====> Fim do Arquivo!");
	fputs("Alterado por Ryan em 18/nov/26",arq);
	
	fclose(arq);
	puts("Arquivo modificado com sucesso!");
}

