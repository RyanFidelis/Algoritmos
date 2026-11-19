
/*
    Name: MenuTXT.cpp
    Author: Ryan Santos Fidelis
    Date: 18/11/26 10:57
    Description: Programa para exibir um menu de opcoes e mexer com TXT
*/

#include <stdio.h>
#include <locale.h>

int main() {
    int opc = 0;
    char nome[20];
    char texto[500];
    FILE *arq;

    setlocale(LC_ALL, "portuguese");

    while (1) {
        printf("\nMENU \n");
        printf("1 - Criar arquivo\n");
        printf("2 - Escrever no arquivo\n");
        printf("3 - Ler arquivo\n");
        printf("0 - Sair\n");

        printf("\nQual funcao vc quer realizar? ");
        scanf("%d", &opc);

        switch (opc) {

            case 1:
                printf("\nDigite o nome do arquivo: ");
                scanf("%s", nome);

                arq = fopen(nome, "w");

                if (arq == NULL) {
                    printf("Erro ao criar arquivo!");
                } else {
                    printf("Digite o conteudo: ");
                    scanf(" %s", texto);

                    fprintf(arq, "%s", texto);
                    fclose(arq);

                    printf("Arquivo criado com sucesso!");
                }
                break;

            case 2:
                printf("\nDigite o nome do arquivo: ");
                scanf("%s", nome);

                arq = fopen(nome, "a");

                if (arq == NULL) {
                    printf("Erro ao abrir arquivo!");
                } else {
                    printf("Digite o novo conteudo: ");
                    scanf(" %s", texto);

                    fprintf(arq, "\n%s", texto);
                    fclose(arq);

                    printf("Conteudo adicionado com sucesso!");
                }
                break;

            case 3:
                printf("\nDigite o nome do arquivo: ");
                scanf("%s", nome);

                arq = fopen(nome, "r");

                if (arq == NULL) {
                    printf("Arquivo nao encontrado!");
                } else {
                    while (fgets(texto, 500, arq) != NULL) {
                        printf("%s", texto);
                    }

                    fclose(arq);
                }
                break;

            case 0:
                printf("Encerrando programa!");
                return 0;

            default:
                printf("Opcao invalida!");
                break;
        }
    }

    return 0;
}

