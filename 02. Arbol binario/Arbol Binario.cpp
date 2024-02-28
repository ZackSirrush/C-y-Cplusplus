#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Nodo {
	int dato;
	struct Nodo *izq;
	struct Nodo *der;
};

struct Nodo *nuevoNodo(int dato){
	size_t tamNodo= sizeof(struct Nodo);
	struct Nodo *nodo = (struct Nodo*) malloc(tamNodo);
	
	nodo->dato=dato;
	nodo->izq=nodo->der=NULL;
	
	return nodo;
}

void insertar (struct Nodo *nodo,int dato){
	if(dato>nodo->dato){
		if(nodo->der==NULL){
			nodo->der=nuevoNodo(dato);
		}else{
			insertar(nodo->der,dato);
		}
	}else{
		if(nodo->izq==NULL){
			nodo->izq=nuevoNodo(dato);
		} else {
		insertar(nodo->izq,dato);
		}
	} 
}

void preorden(struct Nodo *nodo){
	if(nodo!=NULL){
		printf("%d,", nodo->dato);
		preorden(nodo->izq);
		preorden(nodo->der);
	}
}

void inorden(struct Nodo *nodo){
	if(nodo !=NULL){
		inorden(nodo->izq);
		printf("%d,", nodo->dato);
		inorden(nodo->der);
	}
}

void posorden(struct Nodo *nodo){
	if(nodo != NULL){
		posorden(nodo->izq);
		posorden(nodo->der);
		printf("%d,", nodo->dato);
	}
}

main(){
	struct Nodo *raiz=nuevoNodo(4);
	insertar(raiz,2);
	insertar(raiz,1);
	insertar(raiz,3);
	insertar(raiz,8);
	insertar(raiz,6);
	insertar(raiz,5);
	insertar(raiz,7);
	insertar(raiz,9);
	
	printf("\nImprimiendo preorden: \n");
	preorden(raiz);
	printf("\nImprimiendo inorden: \n");
	inorden(raiz);
	printf("\nImprimiendo posorden: \n");
	posorden(raiz);
	
	return 0;
}


