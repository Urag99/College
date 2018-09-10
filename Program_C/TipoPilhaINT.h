#include <stdio.h>
#include<stdlib.h>

struct no {
	int dado;
	struct no *prox;
};

typedef	struct no* TipoPilha;

void INIT(TipoPilha *topo){
	*topo=NULL;
}


int IsEmpty(TipoPilha topo){
	if(topo == NULL){
		return(1);
	}
	else{
		return(0);
	}
}


void PUSH (TipoPilha *topo, int elem){
	TipoPilha novo;
	novo = (TipoPilha) malloc (sizeof(struct no));
	if (novo != NULL)
		{
		novo->dado=elem;
		novo->prox=*topo;
		*topo = novo;
		}
	else
		printf("pilha cheia \n");
}


int POP (TipoPilha *topo,int *elem){
	TipoPilha aux;
	aux = *topo;
	if (!IsEmpty(*topo)) {
	     *elem=aux->dado;
	     *topo=aux->prox;
	     free(aux);
	     return(1);
	     }
	else {
	       printf("pilha vazia \n ");
	       return(0);
	       }
}


int TOP(TipoPilha topo, int *elem){
	if(!IsEmpty(topo)){	
		*elem=topo->dado;
		return(1);
	}
	else{
		printf("pilha vazia \n");
		return(0);
	}
}
