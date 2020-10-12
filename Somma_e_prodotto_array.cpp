#include <stdio.h>
#include <stdlib.h>

int somma(int array[], int dim){
	int somma=0;
	for(int i=0; i<dim; i++){
		if(array[i] % 2 == 0){
			somma+=array[i];
		}
	}
	
	return somma;
}

int prodotto(int array[], int dim){
	int prodotto=1;
	for(int i=0; i<dim; i++){
		if(array[i] % 2 == 1){
			prodotto*=array[i];
		}
	}
	
	return prodotto;
}

int sommaPos(int array[], int dim){
	int somma=0;
	for(int i=1; i<dim; i=i+2){
		somma+=array[i];
	}
		return somma;
} 

void scambia(int array[], int dim){
	
	int array2[dim];
	int i, j=dim-1;
	for(i=0;i<dim;i++){
		array2[j]=array[i];
		j--;
	}
	for(i=0;i<dim;i++){
		array[i]=array2[i];	
	}	
}

void sostituzione(int array[], int dim){
	
	int j;
	for(j=0;j<dim;j++){
		if((array[j] % 2 == 0) && (array[j]>10)){
			array[j]=0;
		}
	}
	
}
int main(){
	int array[10];
	int i;
	
	for(i=0; i<10; i++){
		printf("Inserisci numero \n");
		scanf("%d", &array[i]);
	}
	printf("Somma e prodotto: %d e %d \n", somma(array,10), prodotto(array,10));
	printf("Somma indici dispari == %d \n", sommaPos(array,10));
	scambia(array,10);
	for(int j=0;j<10;j++)
		printf("%d, ", array[j]);
	sostituzione(array, 10);
	printf("\n");
	for(int j=0;j<10;j++)
		printf("%d, ", array[j]);
	
}
