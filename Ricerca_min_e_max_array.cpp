#include <stdio.h>
#include <stdlib.h>

int cercaMinimo(int array[], int dim){
	int minimo;
	minimo = array[0];
	for(int j=1;j<dim;j++){
		if(array[j]<minimo){
			minimo = array[j];
		}
	}
	
	return minimo;	
}

int cercaMassimo(int array[], int dim){
	int massimo;
	massimo = array[0];
	for(int j=1;j<dim;j++){
		if(array[j]>massimo){
			massimo = array[j];
		}
	}
	
	return massimo;	
}

int main(){
	int array[10];
	int i;
	
	for(i=0; i<10; i++){
		printf("Inserisci numero \n");
		scanf("%d", &array[i]);
	}
	printf("Risulati: %d, e %d", cercaMinimo(array, 10), cercaMassimo(array, 10));
	
}
