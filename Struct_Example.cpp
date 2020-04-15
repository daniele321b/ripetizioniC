#include <stdio.h>
#include <string.h>

typedef struct {
		char titolo[20];
		char autore[20];
		float durata;
	} brano;
	
	
	
void visualizza(brano cd[], int dim){
	int i;
	for(i=0;i<dim;i++){
		if(cd[i].durata > 5){
			printf("Titolo: ----> %s\n", cd[i].titolo);
			printf("Autore: ----> %s\n", cd[i].autore);
			printf("Durata: ----> %f\n", cd[i].durata);
			printf("<----------------> \n");
		}
	}
	
}	

void visualizzaAutore(brano cd[], int dim, char aut[]){
	int i;
		for(i=0;i<dim;i++){
		if(strcmp(cd[i].autore,aut) == 0){
			printf("Titolo: ----> %s\n", cd[i].titolo);
			printf("Autore: ----> %s\n", cd[i].autore);
			printf("Durata: ----> %f\n", cd[i].durata);
			printf("<----------------> \n");
		}
	}	
}
	

	
int main(){
	
	brano disco[5];
	char autore[20];
	int s=0;
	
	//inizializzo il disco 
	sprintf(disco[0].titolo, "ancora");
	sprintf(disco[0].autore, "Fabrizio");
	disco[0].durata = 3.2;
	
	sprintf(disco[1].titolo, "cane");
	sprintf(disco[1].autore, "Giovanni");
	disco[1].durata = 2.2;
	
	sprintf(disco[2].titolo, "gatto");
	sprintf(disco[2].autore, "Anna");
	disco[2].durata = 6.5;
	
	sprintf(disco[3].titolo, "domenica");
	sprintf(disco[3].autore, "mario ");
	disco[3].durata = 5.1;
	
	sprintf(disco[4].titolo, "mario");
	sprintf(disco[4].autore, "mario");
	disco[4].durata = 1.4;
	
	do{
		printf("<-----MENU'------>\n");
		printf("Inserisci 1 per VIsualizzare \n");
		printf("Inserisci 2 per Autore \n");
		printf("Inserisci 3 Ordinare \n");
		printf("Inserisci 4 per Uscire \n");
		scanf("%d", &s);
		
		switch(s){
			
			case 1:
				visualizza(disco,5);
				break;
			
			case 2:
				printf("Inserisci l'autore da cercare! \n");
				scanf("%s", autore);
				visualizzaAutore(disco, 5, autore);
				break;
			//case 3:
			//	ordina(disco,5);
			//break;	
		}
		
	}while(s!=4);
	
	
	
	
}
