#include <stdio.h>
#include<stdlib.h>

#include "tipopilhaINT.h"


int main(){
	TipoPilha topo;
	int elem;
	INIT(&topo);
	PUSH(&topo,3);
	PUSH(&topo,7);
	if(TOP(topo,&elem)==1)printf("dado no topo = %d\n\n",elem);
	if(POP(&topo,&elem)==1)printf("retirado = %d\n",elem);
	if(POP(&topo,&elem)==1)printf("retirado = %d\n\n",elem);
}
