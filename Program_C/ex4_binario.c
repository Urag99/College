#include <stdio.h>
#include<stdlib.h>

#include "tipopilhaINT.h"

int main(){
	TipoPilha topo;
	int num, resto;
	INIT(&topo);
	
	printf("digite um numero na base 10: ");
	scanf("%d", &num);
	
	
	while (num != 0){
		resto = num % 2;
		PUSH(&topo,resto);
		num = num/2;
	}
	
	printf("\n O numero binario: ");
	while(!IsEmpty(topo)){
		POP(&topo,&resto);
		printf("%d", resto);
	}
	printf("\n");
}
