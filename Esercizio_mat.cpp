#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calcoloAreaQuadrato(float l){
	return l*l;
}

float calcoloAreaCerchio(float l){
	float raggio = l/2;
	return raggio*raggio*3.14;
}

float calcoloAreaTriangolo(float l){
	float catetoMinore = l/2;
	float catetoMaggiore;
	catetoMaggiore = sqrt((l*l)-(catetoMinore*catetoMinore));
	return (l*catetoMaggiore/2);	
	
}




int main(){
	
	float n, area1, area2, area3;
	printf("Inserisci un numero \n");
	scanf("%f", &n);
	
	area1 = calcoloAreaQuadrato(n);
	area2 = calcoloAreaCerchio(n);
	area3 = calcoloAreaTriangolo(n);
	printf("area1: %f, area2: %f, area3: %f !!!\n", area1, area2, area3);
	
	
}
