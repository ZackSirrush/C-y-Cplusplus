#include<stdio.h>
#include<conio.h>

main(){
	int arreglo[10]={5,23,13,11,7,14,17,19,12,16}; 						/* Declaración de arreglo y variables */
	int a,b,i,j,k,aux;
	
	printf("Arreglo desordenado: \n\n"); 								/* Imprime arreglo desordenado */
	for(i = 0;i < 10;i++){
		printf("%d\t",arreglo[i]);
	}
	
	/* Método burbuja */
	
	for(i=0;i<10;i++){ 													/* Algoritmo de burbuja */
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
	
	/* Método de inserción */
	
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
	return 0;
}


