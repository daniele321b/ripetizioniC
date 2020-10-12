#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define NMAX 20

typedef struct{
	char nome[20];
	int voto;
	int crediti;	
}esame;


void mostraEsami(esame lib[], int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("Nome esame: %s\n", lib[i].nome);
		printf("voto %d\n", lib[i].voto);
		printf("crediti %d\n", lib[i].crediti);
		printf("<-.-.-.-.-.-.-.-.-.-.-.-> \n");
	}
}

void mostraEsami25(esame lib[], int dim){
	int i;
	for(i=0;i<dim;i++){
		if(lib[i].voto >25){
		printf("Nome esame: %s\n", lib[i].nome);
		printf("voto %d\n", lib[i].voto);
		printf("crediti %d\n", lib[i].crediti);
		printf("<-.-.-.-.-.-.-.-.-.-.-.-> \n");
	}
	}
}

void mostraEsamiIns(esame lib[], int dim){
	int i, ins;
	printf("Inserisci il voto da cercare \n");
	scanf("%d", &ins);
	for(i=0;i<dim;i++){
		if(lib[i].voto > ins){
		printf("Nome esame: %s\n", lib[i].nome);
		printf("voto %d\n", lib[i].voto);
		printf("crediti %d\n", lib[i].crediti);
		printf("<-.-.-.-.-.-.-.-.-.-.-.-> \n");
	}
	}
}

void verificaEsame(esame lib[], int dim){
	char input[20];
	int i, trovato = 0;
	printf("Inserisci il nome da cercare \n");
	scanf("%s", input);
	for(i=0;i<dim;i++){
		if(strcmp(lib[i].nome, input)==0){
			trovato = 1;
		}
	}
	if(trovato == 1){
		printf("SOSTENUTO\n");
	}else{
		printf("No SOSTENUTO\n");
	}


}

void mediaAritmetica(esame lib[], int dim){
	int somma=0, i;

		for(i=0;i<dim;i++){
			somma+=lib[i].voto;
		}
	printf("La media è %d", somma/dim);
}

void mediaPonderata(esame lib[], int dim){
	int somma=0, i, crediti=0;

		for(i=0;i<dim;i++){
			somma+=(lib[i].voto * lib[i].crediti);
			crediti+=lib[i].crediti;
		}
	printf("La media ponderata è %d", somma/crediti);
}






int main(){
	
	int esami, i;
	esame libretto[NMAX];
	
	do{
		printf("Esami da inserie \n");
		scanf("%d", &esami);
	}while(esami < 1 || esami >20);
	
	for(i=0;i<esami;i++){
		printf("Nome esame\n");
		scanf("%s", libretto[i].nome);
		do{
			printf("Inserisci voto\n");
			scanf("%d", &libretto[i].voto);
		}while(libretto[i].voto <18 || libretto[i].voto > 30);
		
		do{
			printf("Inserisci crediti\n");
			scanf("%d", &libretto[i].crediti);
		}while(libretto[i].crediti <3 || libretto[i].crediti > 15);
	}
	mostraEsami(libretto,esami);
	mostraEsami25(libretto,esami);
	mostraEsamiIns(libretto,esami);
	verificaEsame(libretto,esami);
	mediaAritmetica(libretto,esami);
	mediaPonderata(libretto,esami);
}
