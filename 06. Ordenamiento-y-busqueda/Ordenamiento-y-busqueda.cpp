#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void qs (int arreglo[10], int limizq, int limder){									/* Algoritmo método quicksort */
	int izq,der,temp,pivote;
	izq=limizq;
	der=limder;
	pivote=arreglo[(izq+der)/2];	
	do{
		while(arreglo[izq]<pivote&&izq<limder)izq++;
		while(pivote<arreglo[der]&&der>limizq)der--;
		if(izq<=der){
			temp=arreglo[izq];
			arreglo[izq]=arreglo[der];
			arreglo[der]=temp;
			izq++;
			der--;
		}
	} while(izq<=der);
	if(limizq<der){
		qs(arreglo,limizq,der);
	}
	if(limder>izq){
		qs(arreglo,izq,limder);
	}
}

void quicksort(int arreglo[10], int n){												/* Método quicksort */
	qs(arreglo,0,n-1);
}

main(){																				/* Main */
	
	int arreglo[10];
	int a,b,i,j,k,opcion,aux,min,dato,iter; 										/* Definición de variables y arreglo */
	srand(time(NULL));
	int size=sizeof(arreglo)/sizeof(int);
	bool band=false;
	iter=0;
	
	printf("Los n%cmeros generados para el arreglo son: \n",163);					/* Imprimir datos generados aleatoriamente */
	for(i=0;i<10;i++){
		arreglo[i]=1+rand()%100;
		printf("%d\t",arreglo[i]);		
	}
	
	do{																				/* Bucle do-while */
		printf("\n\n\nSeleccione una opci%cn del men%c: \n",162,163); 				/* Menú */
		printf("1.M%ctodo burbuja.\n",130);
		printf("2.M%ctodo de inserci%cn.\n",130,162);
		printf("3.M%ctodo de selecci%cn.\n",130,162);
		printf("4.M%ctodo quicksort.\n",130);
		printf("5.Salir y buscar un n%cmero en el arreglo.\n\n",163);
		scanf("%i",&opcion);
		switch(opcion){																/* Switch case */
			case 1: 																/* Método burbuja */
				for(i=0;i<10;i++){
					for(j=0;j<10;j++){
						if(arreglo[j]>arreglo[j+1]){
							k=arreglo[j+1];
							arreglo[j+1]=arreglo[j];
							arreglo[j]=k;
						}	
					}
				}
				printf("\n\nArreglo ordenado, m%ctodo burbuja\n\n",130);			/* Imprimir resultados del método*/
					for(i=0;i<10;i++){
						printf("%d\t",arreglo[i]);
					}	
				break;
			case 2:																	/* Método de inserción */
				for(a=0;a<10;a++){
					b=a;
					aux=arreglo[a];
					while((b>0)&&(aux<arreglo[b-1])){
						arreglo[b]=arreglo[b-1];
						b--;
					}
					arreglo[b]=aux;
				}
				printf("\n\nArreglo ordenado, m%ctodo de inserci%cn\n\n",130,162);	/* Imprimir resultados del método*/
					for(a=0;a<10;a++){
					printf("%d\t",arreglo[a]);
					}	
				break;
			case 3:																	/* Método de selección */
				for(i=0;i<10;i++){
					min=i;
					for(j=i+1;j<10;j++){
						if(arreglo[j]<arreglo[min]){
							min=j;
						}
					}
					aux=arreglo[i];
					arreglo[i]=arreglo[min];
					arreglo[min]=aux;
				}
				printf("\n\nArreglo ordenado, m%ctodo de selecci%cn\n\n",130,162);	/*Imprimir resultados del método*/
				for(i=0;i<10;i++){
					printf("%d\t",arreglo[i]);
				}
				break;
			case 4:																	/* Método quicksort */
				quicksort(arreglo,size);
				printf("\n\nArreglo ordenado, m%ctodo quicksort\n\n",130);			/* Imprimir resultados del métod */
				for(i=0;i<size;i++){
					printf("%d\t",arreglo[i]);
				}
				break;	
		}
	} while (opcion<5);
	
	printf("\n\nPor favor digite el n%cmero que desea encontrar en el arreglo: \n",163);/* Búsqueda de valores en arreglo */
	scanf("%i",&dato);
	while(iter<10 && band==false){													/* Búsqueda secuencial */
		if(arreglo[iter]==dato){
			band=true;
		}
	iter++;
	}
	if(band==false){
		printf("\n\nNo existe el n%cmero buscado en el arreglo\n\n",163);			/* Si el valor que digita el usuario se encuentra en el arreglo coloca false */
	} else if(band==true){
		printf("\n\nEl n%cmero %i existe en el arreglo\n\n",163,dato); 				/* de lo contrario true */
	}
	printf("\nPrograma terminado\n");
	
	return 0;
}



