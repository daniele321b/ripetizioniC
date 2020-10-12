#include <stdlib.h>
#include <stdio.h>

struct nodo {
	int numero;
	struct nodo *next;
};

struct nodo *leggiInteri(void){
	struct nodo *primo, *p;
	int n, i;
	printf("QUanti elementi vuoi inserire?\n");
	scanf("%d", &n);
	primo=NULL;
	
	for(i=0;i<n;i++){
		p = (nodo*) malloc(sizeof(struct nodo));	
		printf("Inserisci il numero\n");
		scanf("%d", &p->numero);
		p->next=primo;
		primo=p;		
	}
	return(primo);	
}

void stampa_lista(struct nodo *p){
	
	while(p != NULL){
		printf("%d \n", p->numero);
		p = p->next;
	}
	
}

int main(void){
	
	struct nodo *p;
	p = leggiInteri(); 
	stampa_lista(p);
}
