/*
	Name: SimulacaoBanco.cpp
	Author: Ryan Santos Fidelis 
	Date: 28/10/26 10:57
	Description: Programa para realizar operações financeiras
*/
#include<stdio.h>
#include<locale.h>
#include <string.h>
#include<windows.h>


void verLogin();
void verSenha();
void consultarSaldo();
void realizarDeposito();
void efetuarSaque();
void trocarSenha();

char conta[] = "100.000";
int senha = 1234;
int i = 0;
float saldo = 100.0;
main(){
	setlocale(LC_ALL,"portuguese");

	int opc;
	while(1){
	printf("\n1 - Consultar Saldo\n2 - Realizar deposito\n3 - Efetuar saque \n4 - Trocar senha \n5- Sair\n");
	printf("Escolha sua opcao: ");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1: consultarSaldo();
		break;
		
		case 2: realizarDeposito();
		break;
		
		case 3: efetuarSaque();
		break;
		
		case 4: trocarSenha();
		break;
		
		case 5: exit(0);
		
		default: puts("Opcao invalida");
	}
}
}

void verLogin(){
	char login[20];
	gets(login);	
	if(strcmp(login,conta) == 0){
		verSenha();
	} else{
		printf("Número da conta: ");
		verLogin();
	}
}

void verSenha(){
	int pwd;
	printf("Senha: ");
	scanf("%d",& pwd);
	if(pwd == senha){
		printf("Login realizado com sucesso!\n");
	} else{
		i ++;
			if(i == 3){
			i = 0;
			printf("Sua conta foi bloqueada, entre em contato com o suporte!");
			return;
			} 
			else{
		verSenha();
		}
	}
}

void consultarSaldo(){
	verLogin();
	printf("R$%.2f\n", saldo);
	system("pause");
	system("cls");
}

void realizarDeposito(){
	char login[20];
	gets(login);
	if(strcmp(login,conta) == 0){
	float dep = 0.0;
	printf("quanto vc quer depositar? ");
	scanf("%f", & dep);
	saldo = saldo + dep;
	printf("seu saldo atual é de: R$%.2f\n", saldo);
	system("pause");
	system("cls");
	} else{
		printf("Número da conta: ");
		realizarDeposito();
	}
	
	
}

void efetuarSaque(){
	verLogin();
	float saq = 0.0;
	printf("quanto vc quer sacar? ");
	scanf("%f", &saq);
	if(saq <= saldo){
	saldo = saldo - saq;
	printf("seu saldo atual é de: R$%.2f\n", saldo);
} else{
	printf("O valor tentado sacar é maior que o seu saldo");
}
	system("pause");
	system("cls");
}

void trocarSenha(){
	verLogin();
	int npwd;
	int npwd2;
	printf("Digite a nova senha: ");
	scanf("%d",& npwd);
	if (npwd == senha){
		printf("As senha são iguais!");
	} else{
		printf("Confirme a nova senha: ");
		scanf("%d",& npwd2);
			if(npwd == npwd2){
				senha = npwd;
				printf("senha alterada com sucesso!");
			} else {
				printf("senha não são iguais!");
			}
	}
	system("pause");
	system("cls");
	}

