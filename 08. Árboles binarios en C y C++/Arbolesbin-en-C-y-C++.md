# Árbol Binario en C y C++

El proyecto está dividido en dos partes, una implementación en C y otra en C++. Este proyecto implementa un árbol binario en C y C++ que permite insertar, eliminar y mostrar nodos, así como realizar recorridos en preorden, inorden y postorden.

## Árbol Binario en C

 La implementación en C permite manipular un árbol binario utilizando estructuras y punteros.

### Implementación en C

El código en C implementa un árbol binario utilizando punteros y estructuras. Permite insertar nodos en el árbol, eliminar nodos específicos, y realizar recorridos en preorden, inorden y postorden.

#### Características del Código en C

- **Estructura de Nodo**: Define la estructura de cada nodo del árbol, incluyendo el dato, punteros a los nodos izquierdo y derecho, y un puntero al nodo padre.
- **Operaciones del Árbol**: Incluye funciones para insertar nodos, mostrar el árbol completo, realizar recorridos en preorden, inorden y postorden, y eliminar nodos específicos.

## Árbol Binario en C++

El código en C implementa un árbol binario en C++ haciendo uso de clases y punteros inteligentes.

### Implementación en C++

La implementación en C++ utiliza clases para representar el árbol binario y sus nodos. Además, hace uso de punteros inteligentes (`unique_ptr`) para administrar la memoria de forma segura.

#### Características del Código en C++

- **Clase Nodo**: Define una clase para representar cada nodo del árbol, con métodos para acceder al dato y a los nodos hijo, así como para obtener el nodo padre.
- **Clase Árbol Binario**: Define una clase para representar el árbol binario, con métodos para insertar nodos, realizar recorridos en preorden, inorden y postorden, y eliminar nodos específicos.

## Uso del Programa

El programa permite al usuario interactuar con el árbol binario a través de un menú de opciones. Se pueden insertar nuevos nodos, eliminar nodos existentes y mostrar el árbol completo o realizar recorridos en diferentes órdenes.

### Funcionalidades Principales

1. **Insertar Nodo**: Permite al usuario ingresar un nuevo valor para insertar en el árbol.
2. **Eliminar Nodo**: Permite al usuario especificar el valor de un nodo para eliminarlo del árbol.
3. **Mostrar Árbol Completo**: Muestra el árbol completo en forma gráfica, incluyendo todos los nodos y sus conexiones.
4. **Recorridos en Preorden, Inorden y Postorden**: Realiza recorridos en preorden, inorden y postorden del árbol, mostrando los valores de los nodos en el orden correspondiente.
5. **Salir**: Termina la ejecución del programa.

## Notas Adicionales

- Ambas implementaciones, en C y C++, proporcionan funcionalidades similares, pero están escritas utilizando diferentes enfoques y características del lenguaje.
- La implementación en C++ utiliza punteros inteligentes para garantizar una gestión segura de la memoria y evitar fugas de memoria.
- Este proyecto puede ser útil para entender cómo se implementan y manipulan los árboles binarios en C y C++, así como para practicar con diferentes características de ambos lenguajes.