#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode {
	int data;
	struct treeNode *sx, *dx;
};
//typedef struct treeNode TreeNode;
typedef treeNode *TreeNodePtr; //puntatore (radice dell'albero)


//inserimento nodo
void insertNode(TreeNodePtr *treePtr, int value){
	if(*treePtr == NULL){
		treePtr = malloc(sizeof(TreeNodePtr));
	
	
	if(*treePtr != NULL){
		(*treePtr) -> data = value;
		(*treePtr) -> sx = NULL;
		(*treePtr) -> dx = NULL;		
	}else{
		printf("Memoria esaurita!\n");
	}
	
	}else{
		if(value < (*treePtr)->data){
			insertNode((*treePtr)->sx, value);
		}else if( value > (*treePtr)->data){
			insertNode((*treePtr)->dx, value);
		}else{
			printf("Nodo già inserito \n");
		}
	}
}




int main(){
	int i, n;
	TreeNodePtr *root = NULL;
	
	for(i=0;i<10;i++){
		printf("Inserisci un numero intero \n");
		scanf("%d", &n);
		insertNode(root, n);
	}
	
}

