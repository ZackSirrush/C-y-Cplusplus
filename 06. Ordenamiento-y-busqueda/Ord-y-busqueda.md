# Implementación de Métodos de Ordenamiento y Búsqueda en C

Este programa en C implementa varios métodos de ordenamiento (burbuja, inserción, selección y quicksort) y una búsqueda secuencial en un arreglo de enteros de tamaño 10.

## Descripción del Programa

El programa comienza generando aleatoriamente 10 números enteros y los almacena en un arreglo. Luego, ofrece al usuario un menú con varias opciones para ordenar el arreglo utilizando diferentes métodos de ordenamiento o buscar un número específico en el arreglo utilizando una búsqueda secuencial.

## Métodos de Ordenamiento

### Método de la Burbuja

El método de la burbuja es un algoritmo simple que funciona comparando pares de elementos adyacentes y moviendo el elemento más grande hacia el final del arreglo en cada iteración.

### Método de Inserción

El método de inserción es un algoritmo eficiente que funciona de manera similar a cómo uno ordenaría cartas en la mano. Comienza con un arreglo desordenado y toma uno de los elementos desordenados a la vez, insertándolo en la posición correcta en el subarreglo ordenado.

### Método de Selección

El método de selección es un algoritmo simple que encuentra repetidamente el elemento más pequeño y lo intercambia con el elemento en la posición actual.

### Método Quicksort

El método quicksort es un algoritmo de ordenamiento eficiente que divide repetidamente el arreglo en subarreglos utilizando un pivote y luego ordena esos subarreglos de forma recursiva.

## Búsqueda Secuencial

El programa también permite al usuario buscar un número específico en el arreglo utilizando una búsqueda secuencial, recorriendo el arreglo de principio a fin hasta encontrar el número deseado.

## Uso del Programa

El usuario puede seleccionar una opción del menú para ordenar el arreglo utilizando uno de los métodos de ordenamiento disponibles o para buscar un número en el arreglo.

## Notas

- Este programa es un ejemplo simple de implementaciones de métodos de ordenamiento y búsqueda en C y puede ser útil para entender los conceptos básicos de estos algoritmos.
- El tamaño del arreglo está fijado en 10 elementos para simplificar el ejemplo, pero los métodos de ordenamiento y búsqueda pueden aplicarse a arreglos de cualquier tamaño.
- No se realizan validaciones exhaustivas de entrada en este programa, por lo que es posible que se comporte de manera inesperada si se ingresan valores no válidos.