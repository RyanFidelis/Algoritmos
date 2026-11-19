/*
	Name: ManipularTXT1.cpp
	Author: Ryan
	Date: 18/11/26 08:27
	Description: programa para manipulação de arquivo do tipo texto
*/

/*a manipulação de arquivo de texto ultiliza a biblioteca <stdio.h> e um ponteiro do tipo FILE * para realizar as operações:
 - abertura (fopen)
 - leitura (read -"r")
 - escrita (write - "w")
 - anexar (append - "a")
 - fechamento (fclose)

Funções:
  -fopen
  		abre o arquivo
  - fprintf(arquivo, formato, ...)
  		escreve um texto fotmatado, como no printf
  - fputs(string, arquivo)
  		escreve uma string no arquivo
  - fputc(caractete, arquivo)
  		escreve um único caractere
  - fclose
  		fecha o arquivo
*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	FILE *arq = fopen("Alunos.txt","w");
	if(arq == NULL){
		perror("Erro ao abrir arquivo!!");
		return 1;
	}
	float nota = 8.5;
	fprintf(arq,"Aluno: %s | Nota: %.2f\n", "Ana",nota);
	if(nota >=6.0){
		fputs("Status: aprovado\n", arq);
	} else{
		fputs("Status: reprovado\n", arq);
	}
	puts("Operação realizada com sucesso!");
}
