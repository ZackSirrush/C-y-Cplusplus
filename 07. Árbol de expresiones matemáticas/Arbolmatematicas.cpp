#include <stdio.h> /* Se añaden las bibliotecas a utilizar */
#include <stdlib.h>
#include <string.h>

#define MAXIMA_LONGITUD_CADENA 3 /* El árbol será un árbol de cadena ya que concideré que sería la manera más eficiente de realizarlo */

struct nodoCadena {
    char cadena[MAXIMA_LONGITUD_CADENA]; /* Se define la estructura y los nodos */
    struct nodoCadena *izquierda;
    struct nodoCadena *derecha;
};

struct nodoCadena *nuevoNodo(char cadena[MAXIMA_LONGITUD_CADENA]){
    size_t tamNodo = sizeof(struct nodoCadena); /* determina el tamaño de cada nodo */
    struct nodoCadena *nodo = (struct nodoCadena *)malloc(tamNodo);
    strcpy(nodo->cadena, cadena);
    nodo->izquierda = nodo->derecha = NULL;
    return nodo; /* devuelve el valor del nodo */
}

void agregar(struct nodoCadena *nodo, char *cadena){ /* Permite agregar una cadena de datos al árbol */
    if (strcmp(cadena, nodo->cadena) > 0){
        if (nodo->derecha == NULL){
            nodo->derecha = nuevoNodo(cadena);
        } else {
            agregar(nodo->derecha, cadena);
        }
    } else {
        if (nodo->izquierda == NULL) {
            nodo->izquierda = nuevoNodo(cadena); /* Determina la posición de la cadena (izquierda o derecha)*/
        } else {
            agregar(nodo->izquierda, cadena); /* Según el orden alfabético */
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

int main(int argc, char const *argv[]){ /* Inicializa main que recibirá parámetros */
    struct nodoCadena *raiz = NULL;
    if (raiz == NULL){
        raiz = nuevoNodo("D.+"); /* Se identifica si el nodo raíz está vacío */
        /* Al estarlo, se añade el nodo correspondiente, en este caso "+" como en los gráficos */
    }
    
    agregar(raiz, "B.*"); /* Se agregan los demás nodos de la ecuación */
    agregar(raiz, "A.A");
    agregar(raiz, "C.B");
    agregar(raiz, "H.^");
    agregar(raiz, "F./");
    agregar(raiz, "E.C");
    agregar(raiz, "G.D");
    agregar(raiz, "I.2");
    
	printf("\nPreorden: \n"); /* Se imprime el método preorden */
    preorden(raiz);
	printf("\nInorden: \n"); /* Se imprime el método inorden */
    inorden(raiz);
    printf("\nPostorden: \n"); /* Se imprime el método postorden */
    postorden(raiz);
 
    printf("\n");

    return 0;
}

