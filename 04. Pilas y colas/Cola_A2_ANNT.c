#include<stdio.h>
#include<stdbool.h>

int main() { 
	int cola[10];								 				/* Definición de variables */
	int dato,final,frente,i,max,menu;
	bool verif;
	
	frente=0; 													/* Inicialización de variables */
	final=1;
	dato=0;
	max=0;
	
	printf("Seleccione una opci%cn del men%c:\n",162,163); 	 	/* Menú */												/* Menú */
	printf("1. Insertar elementos en la cola\n");
	printf("2. Quitar elementos de la cola\n");
	printf("3. Verificar si la cola est%c vac%ca\n",160,161);
	printf("4. Verificar si la cola est%c llena\n",160);
	printf("5. Salir\n");
	scanf("%i",&menu);
	
	while (menu<=4) { 											/* Ciclo while para repetir el menú hasta que el usuario de salir */
		switch (menu) { 										/* Switch-case de menú */
		case 1:													/* Caso 1 */
			system("cls");										/* Limpia pantalla */
			printf("Ingrese la cantidad datos que desea agregar al arreglo: (menos de 10)\n");
			scanf("%i",&max);									/* Recibe valor para max */
			if (final<max) { 									/* Compara si final es menor que max */
				final=max;
				cola[max]=dato; 								/* Guarda el último valor del arreglo como dato */
				for (i=0;i<=max-1;i+=1) { 						/* Llenado manual del arreglo */
					printf("Ingresa el dato en la posici%cn %i:\n",162,i);
					scanf("%i",&cola[i]);
				}
				printf("\n");
				} else {
				printf("La cola est%c llena\n",160);			/* Si final no es menor que max entonces indica que la cola está llena */
			}
			for (i=0;i<=max-1;i++) { 							/* Imprime el arreglo */
				printf("Dato %i: %i\n",i,cola[i]); 
			}
			printf("\n");
			final=max; 											/* Establece el valor de final igual max */
			frente=1;
			break;
		case 2:													/* Caso 2 */
			system("cls");										/* Limpiar pantalla */
			if (frente!=0) {									/* Valida que el arreglo no esté vacio */
				dato=cola[frente];								/* Establece el frente de la cola */
				if ((frente==final)) {
					frente = 0;
					final = 0;									/* si frente igual a fina, set 0 */
				} else {
					frente=frente+1;							/* si no, establece frente=frente+1 */
				}
				for (i=frente-1;i<=max-1;i++) {
				printf("Dato %i: %i\n",i,cola[i]); 				/* Imprime el arreglo */
				}
			} else {
				printf("Nada que borrar, la cola est%c vac%ca\n",160,161);		/* Si frente es igual a 0 muestra mensaje */
			}
			break;
		case 3:													/* Caso 3 */
			system("cls");										/* Limpiar pantalla */
			if ((frente==0)) {									/* Si frente vale 0 */
				verif = true;
				printf("La cola est%c vac%ca\n",160,161); 		/* Indica cola vacia */
			} else {
				verif = false;
				printf("La cola no est%c vac%ca\n",160,161); 	/* De lo contrario, cola no vacía */
			}
			break;
		case 4:													/* Caso 4 */
			system("cls");										/* Limpiar pantalla */
			if (final==max) {
				verif=true;										/* Si final es igual a max la cola está llena */
				printf("La cola est%c llena\n",160);
			} else {
				verif=false;
				printf("La cola no est%c llena\n",160);			/* Si no, cola no está llena */
			}
			break;
		}	
		printf("\n");											/* Repite el menú hasta que el usuario salga del sistema */
		printf("Seleccione una opci%cn del men%c:\n",162,163); 	/* Menú */											/* Menú */
		printf("1. Insertar elementos en la cola\n");
		printf("2. Quitar elementos de la cola\n");
		printf("3. Verificar si la cola est%c vac%ca\n",160,161);
		printf("4. Verificar si la cola est%c llena\n",160);
		printf("5. Salir\n");
		scanf("%i",&menu);
		printf(" \n");
	}
	return 0; 													/* Regresa cero cuando finaliza el programa */
}

