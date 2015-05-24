/**************************************
* Trabalho 1-AV2 de Estrutura de Dados I
* Curso de Sistemas da informacao
* Aluno: Ian Saud Soares - matricula: 0050011104
* Listas
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "listas.h"
int main ()
{
	Lista *a, *b;
	int chave;
	a=lst_cria();
	b=lst_cria();
	puts("Gerando Lista Automaticamente!");
	Sleep(1500);
	system("cls");
	/*Inserir Numeros na Lista*/
	a=lst_insere(a, 100);a=lst_insere(a, 200);a=lst_insere(a, 300);
	a=lst_insere(a, 400);a=lst_insere(a, 500);a=lst_insere(a, 600);
	a=lst_insere(a, 700);
	printf("\n\nLista: ");
	lst_imprime(a);
	printf("Separar em qual Algarismo: ");scanf("%d", &chave);
	b=separa(a,chave);
	printf("\n\nLista 2: ");
	lst_imprime(b);	
system ("pause");
return 0;	
}
