#include <stdio.h> /* Se añaden las bibliotecas a utilizar */
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Nodo { //Estructura de nodos
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};

//Prototipos
void menu();
struct Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&,int,Nodo *);
void mostrarArbol(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminarNodo(Nodo *,int);
void borrarNodo(Nodo *);
struct Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);

struct Nodo *arbol = NULL;

int main(){	
	menu();
	
	return 0;
}

//Menú
void menu(){
	int dato,opcion,contador=0;
	do{
		printf("\t**********MENU**********\n");
		printf("\n1. Insertar nodo");
		printf("\n2. Eliminar nodo");
		printf("\n3. Imprimir arbol en preorden, inorden y postorden");
		printf("\n4. Salir");
		printf("\n\n\t************************\n\n");
		scanf("%d",&opcion);
		
		switch(opcion){
			case 1: 
				printf("\nDigite un numero: ");
				scanf("%d",&dato);
				insertarNodo(arbol,dato,NULL); //Inserta nodo
				system("pause");
				break;
			case 2:
				printf("\nDigite el nodo que desea borrar: ");
				scanf("%d",&dato);
				eliminarNodo(arbol,dato);
				printf("\n");
				system("pause");
				break;
			case 3:
				printf("\nArbol en preorden: - ");
				preOrden(arbol);
				printf("\n");
				printf("\nArbol en inorden: - ");
				inOrden(arbol);
				printf("\n");
				printf("\nArbol en postorden: - ");
				postOrden(arbol);
				printf("\n");
				system("pause");
				break;		
		}
		system("cls");
	}while(opcion != 4);
}

//Crear nuevo nodo
struct Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->der = NULL;
	nuevoNodo->izq = NULL;
	nuevoNodo->padre = padre;
	
	return nuevoNodo;
}

//Insertar nodos
void insertarNodo(struct Nodo *&arbol, int n,Nodo *padre){
	if(arbol == NULL){							//árbol vacío
		Nodo *nuevoNodo = crearNodo(n,padre);
		arbol = nuevoNodo;
	} else { 									//Si ya existen nodos en el árbol
		int vRaiz = arbol->dato;				//Obtener raíz del arbol
		if(n<vRaiz){
			insertarNodo(arbol->izq,n,arbol); 	//Si es menor a raíz se pone en el lado izquierdo
		} else {								//de lo contrario, se pone en el lado derecho
			insertarNodo(arbol->der,n,arbol);
		}			
	}
	
}

//Mostrar árbol
void mostrarArbol(Nodo *arbol,int contador){
	if(arbol == NULL){							//Árbol vacío
		return;
	} else {
		mostrarArbol(arbol->der,contador+1);	//Árbol con datos
		for(int i=0;i<contador;i++){
			printf("   ");
		}
		printf("%d",arbol->dato);
		mostrarArbol(arbol->izq,contador+1);
	}
}

//Recorrido preorden
void preOrden(Nodo *arbol){
	if(arbol == NULL){ 							//Árbol vacío
		return;
	} else {									//Árbol con datos
		printf("%d",arbol->dato);				//Inicia con la raíz
		printf(" - ");
		preOrden(arbol->izq);					//recorre el árbol por la izquierda
		printf(" - ");
		preOrden(arbol->der);					//luego por la derecha
	}
}

//Recorrido inorden
void inOrden(Nodo *arbol){
	if(arbol == NULL){							//Árbol vacío
		return;
	} else {									//Árbol con datos
		inOrden(arbol->izq); 					//Recorre primero por la izquierda
		printf(" - ");
		printf("%d",arbol->dato);				//lLega a la raíz
		printf(" - ");
		inOrden(arbol->der);					//finalmente rrecorre por la derecha
	}
}

//Recorrido postorden
void postOrden(Nodo *arbol){ 					//Árbol sin datos
	if(arbol == NULL){
		return;
	} else {									//Árbol con datos
		postOrden(arbol->izq);					//Inicia el recorrido por la izquierda
		printf(" - ");
		postOrden(arbol->der);					//luego por la derecha
		printf(" - ");
		printf("%d",arbol->dato);				//termina el recorrido en la raíz
	}
}

//Identificar nodo a eliminar
void eliminarNodo (Nodo *arbol,int n){
	if(arbol == NULL){ 							//Árbol vacío
		return;
	} else if (n<arbol->dato){					//Árbol con datos; valor menor a la raíz
		eliminarNodo(arbol->izq,n);				//busqueda por la izquierda
	} else if(n>arbol->dato){					//si es mayor a la raíz
		eliminarNodo(arbol->der,n);				//busca por la derecha
	} else {									//Encuentra valor del nodo
		borrarNodo(arbol);
	}
}	

//Determinar nodo izquierdo menor
struct Nodo *minimo(Nodo *arbol){
	if(arbol == NULL){							//Si el árbol está vacío
		return NULL;							//Devuelve NULL
	} if (arbol->izq) {							//Si tiene valores por la izquierda
		return minimo(arbol->izq);				//busca de nuevo el valor más chico por la izquierda
	} else { 									//si no tiene más izquierdos, devuelve el valor hallado
		return arbol;
	}
}

//Reemplazar nodo por otro
void reemplazar(Nodo *arbol,Nodo *newNodo){
	if(arbol->padre){ 							//verifica si el nodo hijo tiene padre y asigna nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = newNodo;
		} else if(arbol->dato == arbol->padre->der->dato) {
			arbol->padre->der = newNodo;
		}
	} if (newNodo) { 							//verifica si el nodo existe y asigna nuevo padre
		newNodo->padre=arbol->padre;
	}
}

//Destrucción de nodo reemplazado
void destruirNodo(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	delete nodo;
}

//Borrar nodo hallado
void borrarNodo(Nodo *nodoBorrar){
	if(nodoBorrar->izq && nodoBorrar->der){		//Verifica si el nodo tiene lado izquierdo y derecho
		Nodo *menor = minimo(nodoBorrar->der);
		nodoBorrar->dato = menor->dato;
		borrarNodo(menor);
	} else if(nodoBorrar->izq) {				//Si existe nodo izquierdo
		reemplazar(nodoBorrar,nodoBorrar->izq);
		destruirNodo(nodoBorrar);
	} else if(nodoBorrar->der) {				//Si existe nodo por la izquierda
		reemplazar(nodoBorrar,nodoBorrar->der);
		destruirNodo(nodoBorrar);
	} else {									//Si no existen hijos
		reemplazar(nodoBorrar,NULL);
		destruirNodo(nodoBorrar);
	}
}
