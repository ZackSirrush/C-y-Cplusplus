# Árbol Binario de Búsqueda

Este programa en C implementa un Árbol Binario de Búsqueda (ABB) e imprime sus nodos en tres órdenes diferentes: preorden, inorden y posorden.

## Descripción del Programa

El programa crea un ABB e inserta varios nodos con valores enteros. Luego, imprime los nodos en tres órdenes diferentes:

1. **Preorden:** Se imprime el nodo actual, luego se recorre el subárbol izquierdo y finalmente el subárbol derecho.
2. **Inorden:** Se recorre primero el subárbol izquierdo, luego se imprime el nodo actual y finalmente se recorre el subárbol derecho.
3. **Posorden:** Se recorren primero los subárboles izquierdo y derecho y luego se imprime el nodo actual.

## Requisitos

Para compilar y ejecutar este programa, se necesita tener un compilador de C instalado en el sistema. Se puede utilizar cualquier compilador compatible con C estándar, como GCC en sistemas Unix/Linux o MinGW en Windows.

## Instrucciones de Uso

1. Abre una terminal o línea de comandos.
2. Navega hasta el directorio donde se encuentra el archivo fuente `main.c`.
3. Compila el programa
4. Ejecuta el programa
5. El programa imprimirá los nodos del árbol en preorden, inorden y posorden.

## Detalles de Implementación

- Se define una estructura `Nodo` que contiene un valor entero (`dato`) y punteros a los nodos izquierdo (`izq`) y derecho (`der`).
- Se implementan funciones para crear un nuevo nodo (`nuevoNodo`) e insertar un nuevo valor en el árbol (`insertar`).
- Se definen funciones recursivas para imprimir los nodos en los tres órdenes especificados: preorden (`preorden`), inorden (`inorden`) y posorden (`posorden`).
- En la función `main`, se crea un nodo raíz con valor `4` y se insertan varios nodos en el árbol.
- Se invocan las funciones de impresión para mostrar los nodos en los diferentes órdenes.

## Limitaciones y Mejoras Futuras

- Este programa no incluye funcionalidades de eliminación de nodos ni de búsqueda de nodos específicos en el árbol.
- No se realizan validaciones de entrada, por lo que el programa podría comportarse de manera inesperada si se ingresan valores no válidos.
- Se puede mejorar la eficiencia de la inserción y búsqueda en el árbol utilizando técnicas como la rotación de nodos para mantener el equilibrio.
- No se incluyen funcionalidades para la liberación de memoria asignada dinámicamente, lo que puede resultar en fugas de memoria en aplicaciones de largo plazo.