# Árbol de Expresiones Matemáticas en C

Este programa en C implementa un árbol de expresiones matemáticas utilizando una estructura de árbol binario. Cada nodo del árbol representa un operador o un operando en una expresión matemática.

## Descripción del Programa

El programa construye un árbol de expresiones matemáticas utilizando una estructura de árbol binario. Los nodos del árbol contienen cadenas que representan operadores o operandos en la expresión. Se proporcionan métodos para realizar un recorrido preorden, inorden y posorden del árbol, lo que permite imprimir la expresión en diferentes formas.

## Estructura del Árbol

El árbol se construye de manera que los operadores se colocan en los nodos internos del árbol, mientras que los operandos se colocan en los nodos hoja. Cada nodo tiene un máximo de longitud de cadena definido por `MAXIMA_LONGITUD_CADENA`.

## Métodos Implementados

El programa implementa los siguientes métodos para recorrer el árbol:

- **Preorden**: Visita primero el nodo raíz, luego el subárbol izquierdo y finalmente el subárbol derecho.
- **Inorden**: Visita primero el subárbol izquierdo, luego el nodo raíz y finalmente el subárbol derecho.
- **Posorden**: Visita primero el subárbol izquierdo, luego el subárbol derecho y finalmente el nodo raíz.

## Uso del Programa

El programa está configurado para construir un árbol de expresiones matemáticas específicas y luego imprimir la expresión en diferentes formas utilizando los métodos de recorrido implementados.

## Notas

- Este programa es un ejemplo de implementación de árboles de expresiones matemáticas en C y puede ser útil para entender cómo se representan y manipulan las expresiones matemáticas en forma de árbol.
- La implementación actual utiliza una estructura de árbol binario simple. Para expresiones más complejas, se pueden considerar otras estructuras de árbol o algoritmos de evaluación.
- Se ha proporcionado una expresión matemática de ejemplo en el código para demostrar el funcionamiento del programa. Puedes modificar esta expresión o agregar nuevas para explorar diferentes casos de uso.