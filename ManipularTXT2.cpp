/*
	Name: ManipularTXT2.cpp
	Author: Ryan Santos Fidelis
	Date: 18/11/26 08:57
	Description: programa para manipular texto que já existe
*/

#include <stdio.h>
# define MAX_LINHA 128

int main(){
	FILE *arq = fopen("Alunos.txt","r"); //read
	if(arq == NULL){
		perror("Erro ao abrir arquivo!!");
		return 1;
	}
	char linha[MAX_LINHA];
	while(fgets(linha, sizeof(linha),arq) != NULL){
		printf("%s", linha);
	}
	for(int i = 0; linha[i] != '\0'; i++){
	}
	fclose(arq);
}

