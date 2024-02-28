#include <stdio.h> /* Se a�aden las bibliotecas a utilizar */
#include <stdlib.h>
#include <string.h>

#define MAXIMA_LONGITUD_CADENA 3 /* El �rbol ser� un �rbol de cadena ya que concider� que ser�a la manera m�s eficiente de realizarlo */

struct nodoCadena {
    char cadena[MAXIMA_LONGITUD_CADENA]; /* Se define la estructura y los nodos */
    struct nodoCadena *izquierda;
    struct nodoCadena *derecha;
};

struct nodoCadena *nuevoNodo(char cadena[MAXIMA_LONGITUD_CADENA]){
    size_t tamNodo = sizeof(struct nodoCadena); /* determina el tama�o de cada nodo */
    struct nodoCadena *nodo = (struct nodoCadena *)malloc(tamNodo);
    strcpy(nodo->cadena, cadena);
    nodo->izquierda = nodo->derecha = NULL;
    return nodo; /* devuelve el valor del nodo */
}

void agregar(struct nodoCadena *nodo, char *cadena){ /* Permite agregar una cadena de datos al �rbol */
    if (strcmp(cadena, nodo->cadena) > 0){
        if (nodo->derecha == NULL){
            nodo->derecha = nuevoNodo(cadena);
        } else {
            agregar(nodo->derecha, cadena);
        }
    } else {
        if (nodo->izquierda == NULL) {
            nodo->izquierda = nuevoNodo(cadena); /* Determina la posici�n de la cadena (izquierda o derecha)*/
        } else {
            agregar(nodo->izquierda, cadena); /* Seg�n el orden alfab�tico */
        }
    }
}

void preorden(struct nodoCadena *nodo){ /* algoritmo para el preorden */
    if (nodo != NULL){
        printf("%s\n", nodo->cadena);
        preorden(nodo->izquierda);
        preorden(nodo->derecha);
    }
}

void inorden(struct nodoCadena *nodo){ /* algoritmo oara recorrido en inorden */
    if (nodo != NULL){
        inorden(nodo->izquierda);
        printf("%s\n", nodo->cadena);
        inorden(nodo->derecha);
    }
}

void postorden(struct nodoCadena *nodo){ /* algoritmo para recorrido posorden */
    if (nodo != NULL){
        postorden(nodo->izquierda);
        postorden(nodo->derecha);
        printf("%s\n", nodo->cadena);
    }
}

int main(int argc, char const *argv[]){ /* Inicializa main que recibir� par�metros */
    struct nodoCadena *raiz = NULL;
    if (raiz == NULL){
        raiz = nuevoNodo("D.+"); /* Se identifica si el nodo ra�z est� vac�o */
        /* Al estarlo, se a�ade el nodo correspondiente, en este caso "+" como en los gr�ficos */
    }
    
    agregar(raiz, "B.*"); /* Se agregan los dem�s nodos de la ecuaci�n */
    agregar(raiz, "A.A");
    agregar(raiz, "C.B");
    agregar(raiz, "H.^");
    agregar(raiz, "F./");
    agregar(raiz, "E.C");
    agregar(raiz, "G.D");
    agregar(raiz, "I.2");
    
	printf("\nPreorden: \n"); /* Se imprime el m�todo preorden */
    preorden(raiz);
	printf("\nInorden: \n"); /* Se imprime el m�todo inorden */
    inorden(raiz);
    printf("\nPostorden: \n"); /* Se imprime el m�todo postorden */
    postorden(raiz);
 
    printf("\n");

    return 0;
}

