/*
	Name: inverterTXT.cpp
	Author: Ryan Santos Fidelis
	Date: 18/11/26 10:19
	Description: programa para inverter uma frase do arquivo
*/

#include <stdio.h>
#define MAX_LINHA 128

int main(){
    FILE *arq = fopen("Teste.txt","r");
    int i = 0;

    if(arq == NULL){
        perror("Erro ao abrir arquivo!!");
        return 1;
    }

    char linha[MAX_LINHA];

    while(fgets(linha, sizeof(linha),arq)){

        printf("%s \n", linha);

        for(i = 0; linha[i] != '\0'; i++){
        }

        puts("");

        for(i = i - 1; i >= 0; i--){
            printf("%c", linha[i]);
        }

        i = 0;
    }

    fclose(arq);
}

