#include <stdio.h>
#include <stdlib.h>

#include "tipopilhaCHAR.h"

int main()
{
    TipoPilha pilha,aux;
    char frase[50], auxiliar[50];
    int i=0;
    INIT(&pilha);
    
    printf("digite uma palavra: ");
    gets(frase);

// empilhando cada letra da frase digitada até final da string lida,
// o que é marcado com '\0'
   for (i=0; frase[i] != '\0'; i++) {
         PUSH(&pilha,frase[i]);
         printf("\n  Estado da Pilha \n");
         aux=pilha;
         while (aux!=NULL) {
		 	printf("%c\t", aux->dado);
		 	aux=aux->prox;
		 	}
         }





//    desempilhando para obter ordem inversa  usando a propriedade
//    LIFO da pilha
    i=0;
    while (!IsEmpty(pilha)){
       POP(&pilha,&auxiliar[i]);
       i++;
       }
    frase[i] = '\0';
    printf("\n frase desempilhada: \n ");       
    puts(auxiliar);
    printf("\n");
    
// verificando se é palindromo
   if (strcmp(frase, auxiliar) == 0)
      printf("\n  a frase eh um palindromo\n");
   else
      printf("\n  a frase NAO eh um palindromo\n");   
system("pause");
}
