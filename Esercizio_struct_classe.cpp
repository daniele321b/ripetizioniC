#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[20];
	int eta;
}alunno;



void cercaAlunno(alunno *classe, int dim){
	
	int i;
	for(i=0;i<dim;i++){
		if(classe[i].eta>=19)
			printf("%s;\n", classe[i].nome);
	}
}

void cercaEta(alunno *classe, int dim, int eta){
	int i;
	for(i=0;i<dim;i++){
		if(classe[i].eta==eta)
			printf("%s;\n", classe[i].nome);
	}
	
}

int main(){
	
	int alunni, i, eta;
	
		
	printf("Quanti alunni vuoi inserire?\n");
	scanf("%d", &alunni);
	
	alunno *classe = (alunno*)malloc(alunni*(sizeof(alunno)));
	
	for(i=0;i<alunni;i++){
		printf("Inserisci eta' \n");
		scanf("%d", &classe[i].eta);
		printf("Inserisci nome \n");
		scanf("%s", classe[i].nome);
		
		
		
		/*
		classe[i].eta = 19;
		classe[i].nome = "aldo";
		*/
	}
	
	for(i=0;i<alunni;i++){
		printf("%d e %s \n", classe[i].eta, classe[i].nome);
	}
	
	cercaAlunno(classe, alunni);
	printf("Quale eta' vuoi cercare?\n");
	scanf("%d", &eta);
	cercaEta(classe, alunni, eta);
	
	
	
}
