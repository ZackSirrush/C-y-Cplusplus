#include<stdio.h>
#include<stdbool.h>																							 /*Librerías*/

int main() {
	int dato,i,max,menu,tope; 																				/*Inicialización de variables*/
	int pila[10];
	bool verif;
	printf("Ejemplo de Pila con tope m%cximo de 10 n%cmeros enteros\n",160,163); 							/* Introducción al sistema */
	
	tope = 0;
	dato = 0; 																								/* Inicialización de variables */

	printf("Seleccione una opci%cn del men%c:\n",162,163); 													/* Menú */
	printf("1. Insertar elementos en la pila\n");
	printf("2. Quitar elementos de la pila\n");
	printf("3. Verificar si la pila est%c vac%ca\n",160,161);
	printf("4. Verificar si la pila est%c llena\n",160);
	printf("5. Salir\n");
	scanf("%i",&menu);
	
	while (menu<=4) { 																						/* Ciclo While para que se repita el menú hasta que el usuario salga*/
		switch (menu) {																						/* Switch case para el menú */
		case 1: 																							/* Caso 1 */
			system("cls");																					/* Limpia pantalla */
			if (verif==true) { 																				/* Verifica que la pila no esté llena */
				printf("\nPila llena\n");
			} else { 																						/* Si no está llena, solicita ingresar datos al arreglo */
				printf("Digite la cantidad de elementos que tendr%c el arreglo (menos de diez): \n",160);
				scanf("%i",&tope); 																			/* Establece un tope al arreglo */
				printf("\nInserte los elementos al arreglo: \n");
				for (i=0;i<=tope-1;i+=1) { 																	/* Solicita datos hasta que se llenen las posiciones que el usuario insertó */
					printf("Ingresa el dato en la posici%cn %i:\n",162,i);
					scanf("%i",&pila[i]);
				}
				printf("\n");																				/* Imprime el arreglo*/
				for (i=0;i<=tope-1;i+=1) {
					printf("Dato %i: %i\n",i,pila[i]);
				}
				printf("\n");
			}				
			break;
		case 2: 																							/* Caso 2*/
			system("cls"); 																					/* Limpia pantalla */
			if (tope>0) {																					/* Define si el tope del arreglo es mayor a cero */
				dato = pila[0];
				tope = tope-1; 																				/* Quita un elemento del arreglo */
				for (i=0;i<=tope-1;i+=1) {
					printf("Dato %i: %i\n",i,pila[i]); 														/* Reimprime el arreglo descartando el elemento */
				}
			} else {
				printf("Pila vac%ca\n",161); 																/* Al no encontrar elementos en el arreglo imprime que se encuentra vacío */
			}
			break;
		case 3:																								/* Caso 3 */
			system("cls"); 																					/* Limpia pantalla */
			if ((tope==0)) { 																				/* Define si tope es igual a cero*/
				verif = true; 																				/*Si tope es igual a cero entonces la pila está vacía*/
				printf("La pila est%c vac%ca\n",160,161);
			} else {
				verif = false;
				printf("La pila no est%c vac%ca\n",160,161); 												/* Si no, entonces la pila no está vacía*/
			}
			break;
		case 4: 																							/* Caso 4 */
			system("cls");																					/* Limpiar pantalla */
			if ((tope==10)) { 																				/* Define si tope es igual a 10 (el valor máximo del arreglo) */
				verif = true; 
				printf("La pila est%c llena\n",160); 														/* Si sí, la pila está llena */
			} else {
				verif = false;
				printf("La pila no est%c llena\n",160);														/* La pila no está llena */
			}
			break;
		default:
			printf("Seleccione una opci%cn v%clida\n",162,160);
		}
	
		printf("\n\nEjemplo de Pila con tope m%cximo de 10 n%cmeros enteros\n",160,163); 						/* Repite el menú principal */
		printf("Seleccione una opci%cn del men%c:\n",162,163);
		printf("1. Insertar elementos en la pila\n");
		printf("2. Quitar elementos de la pila\n");
		printf("3. Verificar si la pila est%c vac%ca\n",160,161);
		printf("4. Verificar si la pila est%c llena\n",160);
		printf("5. Salir\n");
		scanf("%i",&menu);
	}
 return 0; 																									/* Regresa un valor cero al finalizar el sistema */
}
