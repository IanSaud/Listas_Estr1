/**************************************
* Trabalho 1-AV2 de Estrutura de Dados I
* Curso de Sistemas da informacao
* Aluno: Ian Saud Soares - matricula: 0050011104
* Listas
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct lista
{
	int info;
	struct lista *prox;
}; 
typedef struct lista Lista;

// BUSCAR
Lista *lst_busca(Lista *l, int chave)
{
	  Lista *p;
	  for (p=l;p!=NULL;p=p->prox)
		{
			if (p->info==chave)
			{
				printf("Econtrado!\n");
				return p;
			}
		}
		printf("Nao encontrado!\n");
		return NULL;
	  
}
//REMOVER//
Lista * lst_remove(Lista *l, int chave)
{
      Lista *p;Lista *remover;
      for (p=l;p!=NULL;p=p->prox)
      {
          if (p->info==chave)
          {
              remover=p;
              p=p->prox;
              remover->prox=p->prox;
              free(p);
              printf("Removido!\n");
              return l;
          }
          else
          {
          	printf("Valor nao encontrado\n");
		  }
      }
}
//LIBERAR//
void lst_libera(Lista *l)
{
      Lista *p=l;
      while(p!=NULL)
      {
          Lista *l=p->prox;
          free(p);
          p=l;
      }
}
//CRIAR//
Lista *lst_cria(void)
{
      return NULL;
}
//INSERIR//
Lista *lst_insere  (Lista *l, int chave)
{
      Lista *inserir =(Lista*) malloc(sizeof(Lista));
      inserir->info=chave;
      inserir->prox=l;
      return inserir;
}
//IMPRIMIR//
void lst_imprime(Lista *l)
{
     Lista *p;
        for (p=l;p!=NULL;p=p->prox)
        {
			 printf("%d", p->info);
         	if (p->prox!=NULL)
         		printf(" -> ");
        	else
        		printf(" -> NULL\n");
    	}
}
//DIVIDIR//
Lista *separa(Lista *l, int chave)
{
	Lista *a=l,*b=NULL;
	a=lst_busca(l,chave);
	if(a==NULL)
	{
		puts("Valor nao encontrado");
		return NULL;
	}
	else
	{
		if(a->prox==NULL)
		{
			return b;
		}
		else
		{
			b=a->prox;
		}
		a->prox=NULL;
		return b;	
	}
	
	
}



              



