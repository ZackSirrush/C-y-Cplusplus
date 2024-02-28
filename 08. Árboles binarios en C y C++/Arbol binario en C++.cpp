#include<iostream> //Librerias
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo { //Estructura de nodos
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};

//Prototipos
void menu();
Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&,int,Nodo *);
void mostrarArbol(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminarNodo(Nodo *,int);
void borrarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);

Nodo *arbol = NULL;

int main(){	
	menu();
	
	getch();
	return 0;
}

//Menú
void menu(){
	int dato,opcion,contador=0;
	do{
		cout<<"\t**********MENU**********"<<endl;
		cout<<"1. Insertar nodo"<<endl;
		cout<<"2. Eliminar nodo"<<endl;
		cout<<"3. Imprimir arbol completo, en preorden, inorden y postorden"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"\t************************"<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1: 
				cout<<"\nDigite un numero: "<<endl;
				cin>>dato;
				insertarNodo(arbol,dato,NULL); //Inserta nodo
				system("cls");
				break;
			case 2:
				cout<<"\nDigite el nodo que desea borrar: "<<endl;
				cin>>dato;
				eliminarNodo(arbol,dato);
				cout<<"\n";
				system("pause");
				break;
			case 3:
				cout<<"\nArbol completo: \n\n";
				mostrarArbol(arbol,contador);
				cout<<"\n";
				cout<<"\nArbol en preorden: - ";
				preOrden(arbol);
				cout<<"\n";
				cout<<"\nArbol en inorden: - ";
				inOrden(arbol);
				cout<<"\n";
				cout<<"\nArbol en postorden: - ";
				postOrden(arbol);
				cout<<"\n";
				system("pause");
				break;		
		}
	}while(opcion != 4);
}

//Crear nuevo nodo
Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->der = NULL;
	nuevoNodo->izq = NULL;
	nuevoNodo->padre = padre;
	
	return nuevoNodo;
}

//Insertar nodos
void insertarNodo(Nodo *&arbol, int n,Nodo *padre){
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
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,contador+1);
	}
}

//Recorrido preorden
void preOrden(Nodo *arbol){
	if(arbol == NULL){ 							//Árbol vacío
		return;
	} else {									//Árbol con datos
		cout<<arbol->dato<<" - ";				//Inicia con la raíz
		preOrden(arbol->izq);					//recorre el árbol por la izquierda
		preOrden(arbol->der);					//luego por la derecha
	}
}

//Recorrido inorden
void inOrden(Nodo *arbol){
	if(arbol == NULL){							//Árbol vacío
		return;
	} else {									//Árbol con datos
		inOrden(arbol->izq); 					//Recorre primero por la izquierda
		cout<<arbol->dato<<" - ";				//lLega a la raíz
		inOrden(arbol->der);					//finalmente rrecorre por la derecha
	}
}

//Recorrido postorden
void postOrden(Nodo *arbol){ 					//Árbol sin datos
	if(arbol == NULL){
		return;
	} else {									//Árbol con datos
		postOrden(arbol->izq);					//Inicia el recorrido por la izquierda
		postOrden(arbol->der);					//luego por la derecha
		cout<<arbol->dato<<" - ";				//termina el recorrido en la raíz
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
Nodo *minimo(Nodo *arbol){
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
