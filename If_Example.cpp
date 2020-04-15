//Somma di due numeri maggiori di 5
#include <stdio.h>

int main(void)
{
	//dichiarazione delle due variabilii
	int x,y;
	//dichiarazione varibaile somma
	int somma;
	
	//inserimento dei due numeri(interi)
	printf("Inserisci il primo numero: \n");
	scanf("%d",&x);
	printf("Inserisci il secondo numero: \n");
	scanf("%d",&y);
	if((x>5)&&(y>5)){
		somma=x+y;
		printf("La somma e': %d \n",somma);
	} else{
		printf("Uno o entrambi numeri non sono > di 5 \n");
	}
	
	
printf("FINE!");
return 0;
}
