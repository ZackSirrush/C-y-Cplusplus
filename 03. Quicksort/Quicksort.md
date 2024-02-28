# Implementación del Algoritmo Quicksort en C

Este programa en C implementa el algoritmo de ordenamiento Quicksort para ordenar un arreglo de enteros de manera ascendente.

## Descripción del Programa

El algoritmo Quicksort es un algoritmo de ordenamiento eficiente que se basa en la estrategia de "divide y vencerás". Funciona seleccionando un elemento como pivote y particionando el arreglo en dos subarreglos alrededor del pivote, de modo que los elementos más pequeños que el pivote estén a su izquierda y los elementos más grandes estén a su derecha. Luego, el algoritmo se aplica recursivamente a los subarreglos.

## Requisitos

Para compilar y ejecutar este programa, se necesita tener un compilador de C instalado en el sistema. Se puede utilizar cualquier compilador compatible con C estándar, como GCC en sistemas Unix/Linux o MinGW en Windows.

## Instrucciones de Uso

1. Abre una terminal o línea de comandos.
2. Navega hasta el directorio donde se encuentra el archivo fuente `main.c`.
3. Compila el programa.
4. Ejecuta el programa.
5. El programa imprimirá la lista desordenada y luego la lista ordenada utilizando el algoritmo Quicksort.

## Detalles de Implementación

- La función `qs` implementa el algoritmo Quicksort recursivamente.
- La función `quicksort` proporciona una interfaz más simple para invocar el algoritmo Quicksort con el arreglo completo y su tamaño.
- En la función `main`, se define un arreglo de enteros desordenados y se calcula su tamaño.
- Se imprime el arreglo desordenado y luego se ordena utilizando el algoritmo Quicksort.
- Finalmente, se imprime el arreglo ordenado.

## Limitaciones y Mejoras Futuras

- Este programa se limita a ordenar arreglos de enteros. Se pueden hacer modificaciones para permitir la ordenación de otros tipos de datos.
- No se realizan validaciones de entrada, por lo que el programa podría comportarse de manera inesperada si se ingresan valores no válidos.
- El rendimiento del algoritmo Quicksort puede degradarse en el peor de los casos si la elección del pivote no es adecuada. Se pueden explorar técnicas de mejora, como la selección de un pivote más óptimo.
- Se podría implementar una versión iterativa del algoritmo Quicksort para evitar el riesgo de desbordamiento de pila en arreglos muy grandes debido a la recursión profunda.