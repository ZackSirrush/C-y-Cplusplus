# Cálculo de la moda en un conjunto de calificaciones

Este programa en C solicita al usuario que ingrese 5 calificaciones y luego calcula la moda, es decir, el valor que más se repite en ese conjunto de calificaciones.

## Requisitos

Para compilar y ejecutar este programa, se necesita tener un compilador de C instalado en el sistema. Se puede utilizar cualquier compilador compatible con C estándar, como GCC en sistemas Unix/Linux o MinGW en Windows.

## Instrucciones de Uso

1. Abre una terminal o línea de comandos.
2. Navega hasta el directorio donde se encuentra el archivo fuente `main.c`.
3. Compila el programa
4. Ejecuta el programa
5. Sigue las instrucciones que aparecen en pantalla para ingresar las calificaciones.
6. El programa mostrará el valor que más se repite en el conjunto de calificaciones.

## Detalles de Implementación

- Se define el tamaño del arreglo de calificaciones `TAM` como 5.
- Se utiliza un arreglo adicional `aModa` para almacenar la frecuencia de cada calificación.
- El programa solicita al usuario que ingrese las calificaciones y luego calcula la moda utilizando un enfoque de fuerza bruta.
- Se itera sobre el arreglo de calificaciones para contar cuántas veces aparece cada valor.
- Finalmente, se encuentra el valor con la frecuencia más alta y se muestra como la moda del conjunto.

## Limitaciones y Mejoras Futuras

- Este programa asume que solo hay una moda en el conjunto de calificaciones. Si hay varias modas, solo se mostrará una de ellas.
- El enfoque utilizado para calcular la moda podría ser ineficiente para conjuntos de datos grandes. Se podrían explorar enfoques más eficientes, como el uso de mapas de frecuencia o algoritmos de ordenamiento especializados.
- No se realizan validaciones de entrada, por lo que el programa podría comportarse de manera inesperada si el usuario ingresa valores no válidos.