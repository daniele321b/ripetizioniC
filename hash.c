#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nlist{
	struct nlist *next;
	char *targa;
	char *proprietario;
	double incentivo;
};

static struct nlist *hashtab[1000];

int hash(char *key ) {

	unsigned long int hashval;
	int i = 0;

	while( hashval < ULONG_MAX && i < strlen( key ) ) {
		hashval= hashval + (7*key[i])+4;
		i++;
	}

	return hashval % 1000;
}

struct nlist *lookup(char *targa){
	
	struct nlist *np;
	
	for(np=hashtab[hash(targa)]; np != NULL; np=np->next){
		if(strcmp(targa, np->targa)==0)
			return np;
	}
return NULL;
	
}

struct nlist *install(char *targa, char *pro, double inc){
	
	struct nlist *np;
	unsigned hashval;
	
	if((np=lookup(targa))==NULL){
		np = (struct nlist *) malloc(sizeof(*np));
		if(np==NULL || (np->targa = strdup(targa))==NULL){
			return NULL;
		}
	hashval = hash(targa);
	np->next = hashtab[hashval];
	hashtab[hashval]=np;
	}else{
		free((void*)np->proprietario);
		np->incentivo=0;
	}
	if((np->proprietario = strdup(pro))==NULL){
		return NULL;
	}
	np->incentivo=inc;

	return np;
	
}
double returnSomma(){
int i = 0;
double somma=0;
	
   for(i = 0; i<1000; i++) {
	
      if(hashtab[i] != NULL){
         
         somma = somma + hashtab[i]->incentivo;
}
   }
	

   return somma;
	
}

int main(){
	int scelta;
	double inc, somma;
	char insT[7], insP[20];
	
	struct nlist *p = (struct nlist *)malloc(sizeof(*p));
	struct nlist *s = (struct nlist *)malloc(sizeof(*s));
	install("ab000ab","marco",1000);
	install("cc000cc","luigi",1000);
	install("cd000cd","luigi",2000);
	install("mp000mp","carmine",2000);
	
	
	do{
		
		printf("Inserisci 1 per visualizzare dati \n");
		printf("Inserisci 2 inserire i dati \n");
		printf("Inserisci 3 totale incentivo \n");
		printf("0 esci \n");
		scanf("%d", &scelta);
		
		switch(scelta){
			
					case 1:
							printf("Inserisci la targa \n");
							scanf("%s", insT);
							s = lookup(insT);
							if(s!=NULL){
							printf("Trovato: %s - %s - %lf \n", s->targa, s->proprietario, s->incentivo);
								}else{
									printf("Non trovato\n");
								}
							break;
					case 2:
							printf("Inserisci targa\n");
							scanf("%s", insT);
							printf("Inserisci Propietario\n");
							scanf("%s", insP);
							printf("Inserisci incentivo \n");
							scanf("%lf", &inc);
							
							p = install(insT,insP,inc);
							printf("%lf \n", p->incentivo);
							break;
					case 3: 
							somma = returnSomma();
							printf("Somma incentivo %lf \n", somma);
							
							break;
							
							
		}
		
		
	}while(scelta!=0);
	
	
}














