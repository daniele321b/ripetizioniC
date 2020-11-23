#include <stdio.h>
#include <stdlib.h>
struct node {
  int matricola;
  char *nome;
  char *cognome;
  struct node *next;
};

struct node *start = NULL;

void inserisci(int);
void mostra();
void cancella(int);
void modifica(int);

int count = 1;
int studenti_mat = 0;

int main () {
  int i, canc, mod;

  do {
    printf("1. Inserisci.\n");
    printf("2. Mostra.\n");
    printf("3. Cancella.\n");
    printf("4. Modifica. \n");
    printf("0. esci.\n");


    scanf("%d", &i);

    switch(i){
    	case 1:
    		printf("Inserisci studente\n");
      		inserisci(studenti_mat);
      		studenti_mat++;
      		break;
      	case 2:
      		printf("Lista studenti\n");
      		mostra();
      		break;
      	case 3:
      		printf("Inserisci matricola da cancellare \n");
      		scanf("%d",&canc);
      		cancella(canc);
      		break;  
		case 4:
      		printf("Inserisci matricola da modificare \n");
      		scanf("%d",&mod);
      		modifica(mod);
      		break; 			
	}
	
  }while(i!=0);

  return 0;
}


void inserisci(int m) {
	struct node *t, *temp;
	char *n = (char*)malloc(sizeof(char)*20);
	char *c = (char*)malloc(sizeof(char)*20);
  t = (struct node*)malloc(sizeof(struct node));
  printf("Nome:\n");
  scanf("%s",n);
  printf("Cognome:\n");
  scanf("%s",c);
  t->matricola = m;
  t->nome= n;
  t->cognome= c;
  //printf("Nome %s e cogn: %s \n",t->nome,t->cognome );
  
  count++;

  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }

  temp = start;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = t;
  t->next   = NULL;
}

void mostra() {
  struct node *t;

  t = start;

  if (t == NULL) {
    printf("Lista vuota.\n");
    return;
  }

  printf("Ci sono %d elementi nella lista.\n", count);

  while (t->next != NULL) {
  	printf("<---------------->\n");
    printf("%d\n", t->matricola);
    printf("%s\n", t->nome);
    printf("%s\n", t->cognome);
    t = t->next;
  }
  printf("<---------------->\n");
  printf("%d\n", t->matricola);
  printf("%s\n", t->nome);
  printf("%s\n", t->cognome); 
}

void cancella(int canc) {
  struct node *pred, *x;
  int n, trovato=0;

  if (start == NULL) {
    printf("Lista vuota.\n");
    return;
  }

pred = NULL;;
x = start;


do {
	n = x->matricola;
	if(n==canc){
	
	if(pred!=NULL){
		pred->next=x->next;
		free(x);
		trovato = 1;
	}}
		else{
		pred=x;
		x=x->next;
	}

  }while (trovato!=1 && x->next != NULL);
}

void modifica(int mod) {
  struct node *pred, *x;
  int n, trovato=0;

  if (start == NULL) {
    printf("Lista vuota.\n");
    return;
  }

pred = NULL;;
x = start;


do {
	n = x->matricola;
	if(n==mod){
		printf("Inserisci nome\n");
		scanf("%s",x->nome);
		printf("Inserisci cognome\n");
		printf("%s",x->cognome);
		trovato=1;
	}else{
		pred=x;
		x=x->next;
	}

  }while (trovato!=1 && x->next != NULL);
}
 

