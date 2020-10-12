#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
	char marca[20];
	int cilindrata;
	int anno;
	char targa[7];	
}automobile;

void ricercaAnno(automobile salone[], int dim, int a){
	int i;
	
	for(i=0;i<dim;i++){
		if(salone[i].anno == a){
			printf("Trovata\n");
			printf("%s \n", salone[i].targa);
			printf("%d \n", salone[i].cilindrata);
			printf("%s \n", salone[i].marca);
			printf("<----------------> \n");
		}
	}	
}

void ricercaMarca(automobile salone[], int dim, char marca[20]){
	int i;
	
	for(i=0;i<dim;i++){
		if(strcmp(salone[i].marca, marca)==0 ){
			printf("Trovata\n");
			printf("%s \n", salone[i].targa);
			printf("%d \n", salone[i].cilindrata);
			printf("%d \n", salone[i].anno);
			printf("<----------------> \n");
		}
	}	
}




int main(){
	
	automobile salone[10];
	int n, i;
	char x[20];
	
	do{
	printf("Quante macchine vuoi inserire?\n");
	scanf("%d", &n);
	}while(n<1 || n>10);
	
	for(i=0;i<n;i++){
		
		printf("Inserisci la marca\n");
		scanf("%s", salone[i].marca);
		printf("Inserire la cilidrata\n");
		scanf("%d", &salone[i].cilindrata);
		
		do{
		printf("Inserire l anno\n");
		scanf("%d", &salone[i].anno);
		}while((salone[i].anno < 1950) || (salone[i].anno > 2020));
		
		do{
		printf("Inserisci la targa\n");
		scanf("%s", x);
		}while(strlen(x)!=7);
		strcpy(salone[i].targa, x); 
	
		}
	
	ricercaAnno(salone, n, 2020);
	ricercaMarca(salone, n, "bmw");
	
	
}
