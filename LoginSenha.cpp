/*
	Name: LoginSenha.cpp
	Author: Ryan Santos Fidelis 
	Date: 28/10/26 10:14
	Description: Programa para simular um login e senha 
*/
#include<stdio.h>
#include<locale.h>
#include <string.h>

void verLogin();
void verSenha();

char user[] = "User";
int senha = 1234;
int i = 0;
main(){
	setlocale(LC_ALL,"portuguese");
	
	verLogin();
}

void verLogin(){
	char login[20];
	printf("Login: ");
	gets(login);	
	if(strcmp(login,user) == 0){
		verSenha();
	} else{
		verLogin();
	}
}

void verSenha(){
	int pwd;
	printf("Senha: ");
	scanf("%d",& pwd);
	if(pwd == senha){
		printf("Login realizado com sucesso!");
	} else{
		i ++;
			if(i == 3){
			i = 0;
			fflush(stdin);
			verLogin();
			} 
			else{
		verSenha();
		}
	}
}

